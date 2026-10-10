
void __thiscall FUN_0053c110(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d90ef;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_simple_anim_player__ComputeBoneL_00737764);
  puVar1 = (uint *)(param_1 + 1);
  uVar2 = param_1[1] * 2;
  local_4 = 0;
  if (((uVar2 ^ param_1[1]) & 0x7fffffff ^ uVar2) == 0xffffffff) {
    iVar3 = *param_1;
  }
  else {
    iVar3 = FUN_00549470(puVar1);
  }
  if (*(int *)(iVar3 + 0x4c) < 0x100) {
    FUN_0053b910(&DAT_00764848);
    uVar2 = *puVar1 * 2;
    if (((uVar2 ^ *puVar1) & 0x7fffffff ^ uVar2) != 0xffffffff) {
      FUN_00549470(puVar1);
    }
    FUN_0053cff0(param_2,param_1 + 8,&DAT_00764848,param_3);
  }
  else {
    param_3[0xc] = 0;
    param_3[8] = 0;
    param_3[4] = 0;
    param_3[0xd] = 0;
    param_3[9] = 0;
    param_3[1] = 0;
    param_3[0xe] = 0;
    param_3[6] = 0;
    param_3[2] = 0;
    param_3[0xb] = 0;
    param_3[7] = 0;
    param_3[3] = 0;
    *param_3 = 0x3f800000;
    param_3[5] = 0x3f800000;
    param_3[10] = 0x3f800000;
    param_3[0xf] = 0x3f800000;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

