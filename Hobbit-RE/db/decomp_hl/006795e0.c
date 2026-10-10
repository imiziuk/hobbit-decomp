
void __thiscall FUN_006795e0(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6d2a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_audio_voice_mgr__FreeVoice_00752aa8);
  piVar1 = (int *)param_2[4];
  local_4 = 0;
  FUN_0067be00();
  while (piVar1 != param_2 + 3) {
    piVar2 = (int *)piVar1[1];
    FUN_00678390(piVar1,1);
    piVar1 = piVar2;
  }
  FUN_0067be20();
  *(int *)(*param_2 + 4) = param_2[1];
  *(int *)param_2[1] = *param_2;
  iVar3 = param_2[0x38];
  FUN_00648600(param_2,0,0xf8);
  param_2[0x38] = iVar3 + 1;
  if (param_3 != 0) {
    *param_2 = *(int *)(param_1 + 0xf8);
    param_2[1] = param_1 + 0xf8;
    *(int **)(param_1 + 0xf8) = param_2;
    *(int **)(*param_2 + 4) = param_2;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

