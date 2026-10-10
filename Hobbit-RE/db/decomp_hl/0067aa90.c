
bool __thiscall FUN_0067aa90(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6e98;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_audio_channel_mgr__Acquire_00752d68);
  local_4 = 0;
  iVar1 = FUN_0067b220();
  if (iVar1 == 0) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return false;
  }
  FUN_0067be00();
  piVar2 = (int *)param_1[1];
  if (piVar2 == param_1) {
    piVar2 = (int *)param_1[0x22];
    if (piVar2[0x14] < *(int *)(param_2 + 0x40)) {
      FUN_0067b090(piVar2,0,1);
      goto LAB_0067ab3a;
    }
  }
  else {
    *(int *)(*piVar2 + 4) = piVar2[1];
    *(int *)piVar2[1] = *piVar2;
LAB_0067ab3a:
    piVar2[0x15] = 0;
    piVar2[0x13] = 0;
    piVar2[0x16] = 0;
    piVar2[4] = param_2;
    piVar2[0x14] = *(int *)(param_2 + 0x40);
    piVar2[2] = *(int *)(param_2 + 0x88);
    piVar2[3] = *(int *)(param_2 + 0x8c);
    piVar2[0xb] = *(int *)(param_2 + 0x70);
    piVar2[0xc] = *(int *)(param_2 + 0x78);
    piVar2[0x12] = *(int *)(param_2 + 0x80);
    piVar2[0xd] = *(int *)(param_2 + 0x3c);
    piVar2[0xe] = *(int *)(param_2 + 0x5c);
    piVar2[0xf] = *(int *)(param_2 + 0x60);
    piVar2[0x10] = *(int *)(param_2 + 100);
    piVar2[0x11] = *(int *)(param_2 + 0x68);
    piVar2[0x19] = 0;
    FUN_0067b110(piVar2,0);
    FUN_0067b780(piVar2,piVar2[1]);
    iVar1 = FUN_0067b6d0(piVar2);
    if (iVar1 != 0) {
      if (*(int *)(param_2 + 0x88) == 0) {
        FUN_0067bad0(piVar2);
      }
      *(int **)(param_2 + 0x10) = piVar2;
      goto LAB_0067ac05;
    }
    *(int *)(*piVar2 + 4) = piVar2[1];
    *(int *)piVar2[1] = *piVar2;
    *piVar2 = *param_1;
    piVar2[1] = (int)param_1;
    *param_1 = (int)piVar2;
    *(int **)(*piVar2 + 4) = piVar2;
  }
  piVar2 = (int *)0x0;
LAB_0067ac05:
  FUN_0067be20();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return piVar2 != (int *)0x0;
}

