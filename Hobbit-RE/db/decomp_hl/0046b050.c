
void __thiscall FUN_0046b050(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int local_4;
  
  if ((-1 < param_2) && (param_2 < 0x81)) {
    iVar4 = *(int *)(param_1 + 0xcc);
    while (param_2 < iVar4) {
      local_4 = (*(int *)(param_1 + 0xcc) - param_2) + -1;
      if (0 < local_4) {
        iVar4 = param_2 << 6;
        do {
          iVar2 = iVar4 + 0x40 + *(int *)(param_1 + 0xd0);
          iVar1 = iVar4 + *(int *)(param_1 + 0xd0);
          FUN_0064a320(iVar2);
          *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar2 + 0x2c);
          *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar2 + 0x30);
          *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar2 + 0x34);
          *(undefined2 *)(iVar1 + 0x38) = *(undefined2 *)(iVar2 + 0x38);
          iVar4 = iVar4 + 0x40;
          uVar3 = (byte)((byte)((int)(uint)(ushort)(*(short *)(iVar2 + 0x3a) << 0xf) >> 0xf) ^
                        (byte)*(ushort *)(iVar1 + 0x3a)) & 1 ^ *(ushort *)(iVar1 + 0x3a);
          *(ushort *)(iVar1 + 0x3a) = uVar3;
          *(ushort *)(iVar1 + 0x3a) =
               (byte)((byte)((int)(uint)(ushort)(*(short *)(iVar2 + 0x3a) << 0xe) >> 0xe) ^
                     (byte)uVar3) & 2 ^ uVar3;
          local_4 = local_4 + -1;
          *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar2 + 0x3c);
        } while (local_4 != 0);
      }
      iVar4 = *(int *)(param_1 + 0xcc) + -1;
      *(int *)(param_1 + 0xcc) = iVar4;
    }
    while (iVar4 < param_2) {
      iVar4 = FUN_00473f70();
      if (*(int *)(iVar4 + 0x24) == 0) {
        FUN_0064a2e0(s_<RENAME_ME>_0072705c);
        *(undefined4 *)(iVar4 + 0x30) = 0;
        *(undefined4 *)(iVar4 + 0x34) = 0;
        *(undefined4 *)(iVar4 + 0x2c) = 0;
        *(undefined2 *)(iVar4 + 0x38) = 0;
        *(ushort *)(iVar4 + 0x3a) = *(ushort *)(iVar4 + 0x3a) & 0xfffe | 2;
      }
      iVar4 = *(int *)(param_1 + 0xcc);
    }
  }
  return;
}

