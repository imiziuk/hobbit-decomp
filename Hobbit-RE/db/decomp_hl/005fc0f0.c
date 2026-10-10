
undefined4 __thiscall FUN_005fc0f0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 < 1) {
    return 0;
  }
  iVar4 = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
    if (0 < iVar2) {
      while (((puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x18) + iVar4 * 4),
              iVar2 = FUN_004021c0(*puVar1,puVar1[1]), iVar2 == 0 ||
              (iVar2 = *(int *)(*(int *)(iVar2 + 0x300) + 0xbc), iVar2 == 0)) ||
             (*(uint *)(*(int *)(*(int *)(param_1 + 0x18) + iVar4 * 4) + 8) !=
              (uint)*(byte *)(iVar2 + 0x44)))) {
        iVar4 = iVar4 + 1;
        if (*(int *)(param_1 + 0x14) <= iVar4) {
          uVar3 = FUN_005f11b0(param_2);
          return uVar3;
        }
      }
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    }
  }
  else {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    if (0 < iVar2) {
      while (((puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x18) + iVar4 * 4),
              iVar2 = FUN_004021c0(*puVar1,puVar1[1]), iVar2 != 0 &&
              (iVar2 = *(int *)(*(int *)(iVar2 + 0x300) + 0xbc), iVar2 != 0)) &&
             (*(uint *)(*(int *)(*(int *)(param_1 + 0x18) + iVar4 * 4) + 8) ==
              (uint)*(byte *)(iVar2 + 0x44)))) {
        iVar4 = iVar4 + 1;
        if (*(int *)(param_1 + 0x14) <= iVar4) {
          uVar3 = FUN_005f11b0(param_2);
          return uVar3;
        }
      }
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
      uVar3 = FUN_005f11b0(param_2);
      return uVar3;
    }
  }
  uVar3 = FUN_005f11b0(param_2);
  return uVar3;
}

