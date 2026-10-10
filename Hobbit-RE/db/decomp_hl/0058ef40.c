
int __thiscall FUN_0058ef40(int param_1,int param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int local_4;
  
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x50)) {
    do {
      puVar1 = (ushort *)(*(int *)(param_1 + 0x54) + local_4 * 4);
      if ((uint)puVar1[1] == *(uint *)(param_2 + 0x24)) {
        uVar4 = 0;
        if (puVar1[1] != 0) {
          while (*(ushort *)((*puVar1 + uVar4) * 2 + *(int *)(param_1 + 0x1c)) ==
                 (ushort)*(byte *)(*(int *)(param_2 + 0xc) + uVar4)) {
            uVar5 = FUN_0058ef30(*(undefined2 *)(*(int *)(param_2 + 0x28) + uVar4 * 2));
            uVar6 = (undefined4)uVar5;
            uVar2 = FUN_0058ef30(*(undefined2 *)
                                  (*(int *)(param_1 + 0x38) + (int)((ulonglong)uVar5 >> 0x20)));
            iVar3 = FUN_00647ed0(uVar2,uVar6);
            if ((iVar3 != 0) || (uVar4 = uVar4 + 1, (int)(uint)puVar1[1] <= (int)uVar4)) break;
          }
        }
        if (uVar4 == puVar1[1]) {
          return local_4;
        }
      }
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_1 + 0x50));
  }
  return -1;
}

