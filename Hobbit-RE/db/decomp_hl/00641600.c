
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00641600(undefined4 param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5dee;
  local_c = ExceptionList;
  fVar1 = *param_3 * _DAT_006e9560 * _DAT_006e955c;
  fVar2 = param_3[1] * _DAT_006e9560 * _DAT_006e955c;
  fVar3 = param_3[2] * _DAT_006e9560 * _DAT_006e955c;
  ExceptionList = &local_c;
  FUN_00649920();
  local_4 = 0;
  uVar4 = FUN_00649940((double)fVar1,(double)fVar2,(double)fVar3);
  FUN_00640b90(param_1,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

