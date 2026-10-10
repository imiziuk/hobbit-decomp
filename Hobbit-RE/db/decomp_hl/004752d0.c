
void __thiscall FUN_004752d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int local_1c;
  int local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d1898;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_cinema_action__OnImport_00727c50);
  uVar2 = param_2;
  local_1c = (int)*(short *)(param_1 + 0xe);
  local_4 = 0;
  FUN_00649920(&param_2,s_Action_d_Shot_00727c40,param_2);
  piVar3 = &local_1c;
  local_4._0_1_ = 1;
  uVar1 = FUN_00649940(piVar3);
  FUN_00640450(uVar1,piVar3);
  local_4._0_1_ = 0;
  FUN_00649950();
  *(undefined2 *)(param_1 + 0xe) = (undefined2)local_1c;
  local_1c = (int)*(short *)(param_1 + 0xc);
  FUN_00649920(&param_2,s_Action_d_SyncPoint_00727c08,uVar2);
  piVar3 = &local_1c;
  local_4._0_1_ = 2;
  uVar1 = FUN_00649940(piVar3);
  FUN_00640450(uVar1,piVar3);
  local_4._0_1_ = 0;
  FUN_00649950();
  *(undefined2 *)(param_1 + 0xc) = (undefined2)local_1c;
  local_18[0] = (int)(short)(*(short *)(param_1 + 0x10) << 0xf) >> 0xf;
  FUN_00649920(&param_2,s_Action_d_FinishShot_00727bf4,uVar2);
  piVar3 = local_18;
  local_4._0_1_ = 3;
  uVar1 = FUN_00649940(piVar3);
  FUN_006405b0(uVar1,piVar3);
  local_4._0_1_ = 0;
  FUN_00649950();
  *(ushort *)(param_1 + 0x10) =
       (byte)((byte)*(ushort *)(param_1 + 0x10) ^ (byte)local_18[0]) & 1 ^
       *(ushort *)(param_1 + 0x10);
  FUN_00649920(&param_2,s_Action_d_Offset_00727c30,uVar2);
  iVar4 = param_1 + 4;
  local_4._0_1_ = 4;
  uVar1 = FUN_00649940(iVar4);
  FUN_00640420(uVar1,iVar4);
  local_4._0_1_ = 0;
  FUN_00649950();
  FUN_00649920(&param_2,s_Action_d_Duration_00727c1c,uVar2);
  iVar4 = param_1 + 8;
  local_4._0_1_ = 5;
  uVar1 = FUN_00649940(iVar4);
  FUN_00640420(uVar1,iVar4);
  local_4._0_1_ = 0;
  FUN_00649950();
  FUN_00649920(&param_2,s_Action_d_DefaultLength_00727bdc,uVar2);
  param_1 = param_1 + 0x18;
  local_4._0_1_ = 6;
  uVar2 = FUN_00649940(param_1);
  FUN_00640420(uVar2,param_1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649950();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

