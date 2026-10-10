
void __thiscall FUN_00475120(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar3 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d1850;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(&param_2,s_Action_d_Shot_00727c40,param_2);
  iVar4 = (int)*(short *)(param_1 + 0xe);
  local_4 = 0;
  uVar1 = FUN_00649940(iVar4);
  FUN_00641480(uVar1,iVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s_Action_d_Offset_00727c30,uVar3);
  uVar1 = *(undefined4 *)(param_1 + 4);
  local_4 = 1;
  uVar2 = FUN_00649940(uVar1);
  FUN_00641400(uVar2,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s_Action_d_Duration_00727c1c,uVar3);
  uVar1 = *(undefined4 *)(param_1 + 8);
  local_4 = 2;
  uVar2 = FUN_00649940(uVar1);
  FUN_00641400(uVar2,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s_Action_d_SyncPoint_00727c08,uVar3);
  iVar4 = (int)*(short *)(param_1 + 0xc);
  local_4 = 3;
  uVar1 = FUN_00649940(iVar4);
  FUN_00641480(uVar1,iVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s_Action_d_FinishShot_00727bf4,uVar3);
  iVar4 = (int)(short)(*(short *)(param_1 + 0x10) << 0xf) >> 0xf;
  local_4 = 4;
  uVar1 = FUN_00649940(iVar4);
  FUN_00641760(uVar1,iVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&stack0x00000008,s_Action_d_DefaultLength_00727bdc,uVar3);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  local_4 = 5;
  uVar3 = FUN_00649940(uVar1);
  FUN_00641400(uVar3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

