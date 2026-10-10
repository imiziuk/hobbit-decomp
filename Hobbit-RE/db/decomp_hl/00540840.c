
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00540840(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  ushort uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 300) = 1;
  *(undefined4 *)(param_1 + 0x13c) = 1;
  *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
  *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
  FUN_005434b0(param_2,param_5);
  iVar2 = FUN_00549470(param_1 + 0xd0);
  FUN_00549580(param_1 + 0xd0);
  uVar1 = *(ushort *)(*(int *)(param_1 + 0xd4) * 0x50 + 0x30 + *(int *)(iVar2 + 0x58));
  *(undefined4 *)(param_1 + 8) = param_4;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(float *)(param_1 + 0x2c) = (float)uVar1 * _DAT_006f3c10;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}

