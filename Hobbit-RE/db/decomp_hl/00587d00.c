
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00587d00(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 local_1c [4];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dca88;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_mgr__EnableFog_00741db4);
  iVar1 = DAT_0075cf1c;
  local_4 = 0;
  if (DAT_00778074 != 0) {
    param_2 = 0;
  }
  FUN_0065fce0(0);
  FUN_006721c0(local_18,local_1c);
  if (iVar1 == 0) {
    iVar1 = 1;
    fVar4 = _DAT_006f4070;
  }
  else {
    fVar4 = *(float *)(iVar1 + 0xc0);
    iVar1 = *(int *)(iVar1 + 0xc4);
  }
  if (*(int *)(param_1 + 0x154) == 0) {
    param_2 = 0;
  }
  if ((*(int *)(param_1 + 0x158) == 0) && (iVar1 == 0)) {
    param_2 = 0;
  }
  if (*(int *)(param_1 + 0x150) != param_2) {
    *(int *)(param_1 + 0x150) = param_2;
    if (param_2 == 2) {
      param_2 = 1;
    }
    if (*(int *)(param_1 + 0x158) != 0) {
      fVar4 = *(float *)(param_1 + 0x15c);
      iVar1 = FUN_0052a650();
      if (iVar1 == 9) {
        fVar4 = fVar4 + _DAT_006e99c0;
      }
    }
    iVar1 = *DAT_007f1000;
    if (param_2 == 1) {
      (**(code **)(iVar1 + 200))(DAT_007f1000,0x1c,1);
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x23,3);
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x26,DAT_007407b4);
      fVar2 = fVar4;
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x22,fVar4);
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x24,fVar2);
      iVar1 = *DAT_007f1000;
      uVar3 = 0x25;
    }
    else {
      fVar4 = 0.0;
      uVar3 = 0x1c;
    }
    (**(code **)(iVar1 + 200))(DAT_007f1000,uVar3,fVar4);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

