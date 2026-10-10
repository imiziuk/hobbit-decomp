
void __fastcall FUN_00549af0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    if (*(int *)(param_1 + 0x10) < 0) goto LAB_00549be6;
    do {
      if (*(int *)(param_1 + 0x24) != 0) {
        iVar3 = (int)uVar4 >> (*(byte *)(param_1 + 0x1e) & 0x1f);
        uVar5 = *(uint *)(param_1 + 0x18) & uVar4;
        puVar1 = (uint *)(*(int *)(param_1 + 0x24) + iVar3 * 0x18);
        uVar6 = __allshl();
        if ((((((uint)uVar6 & *puVar1) == 0 && ((uint)((ulonglong)uVar6 >> 0x20) & puVar1[1]) == 0)
             && (iVar2 = uVar5 * 0x7c + puVar1[2], *(int *)(iVar2 + 0x74) != 0)) &&
            (*(int *)(iVar2 + 0x68) != 0)) &&
           ((iVar3 = FUN_00647ed0(*(undefined4 *)
                                   (*(int *)(*(int *)(*(int *)(param_1 + 0x24) + 8 + iVar3 * 0x18) +
                                             0x74 + uVar5 * 0x7c) + 8),s__anim_00730690), iVar3 == 0
            || (iVar3 = FUN_00647ed0(*(undefined4 *)
                                      (*(int *)(*(int *)(*(int *)(param_1 + 0x24) + 8 +
                                                        ((int)uVar4 >>
                                                        (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18)
                                                + 0x74 + (*(uint *)(param_1 + 0x18) & uVar4) * 0x7c)
                                      + 8),s__charanim_00730678), iVar3 == 0)))) {
          FUN_0053c880(*(undefined4 *)
                        (*(int *)(*(int *)(param_1 + 0x24) + 8 +
                                 ((int)uVar4 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18) + 0x68 +
                        (*(uint *)(param_1 + 0x18) & uVar4) * 0x7c));
        }
      }
LAB_00549be6:
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < *(int *)(param_1 + 0x10));
  }
  return;
}

