
void FUN_00679980(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6d3c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_audio_voice_mgr__InstantiateStre_00752ac4);
  iVar4 = *(int *)(param_1 + 0xd8);
  iVar1 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 8) + 8);
  local_4 = 0;
  if (param_2 == 0) {
    puVar2 = *(undefined4 **)(iVar4 + 0xc);
    puVar5 = (undefined4 *)(param_1 + 8);
    puVar6 = puVar2;
    puVar7 = puVar5;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    uVar3 = *(undefined4 *)(iVar1 + 300 + puVar2[5] * 4);
    FUN_00648600(param_1 + 0x30,0,0x2e);
    FUN_00648480(param_1 + 0x30,puVar2,uVar3);
    iVar4 = *(int *)(param_1 + 0xd8);
  }
  else {
    if (param_2 != 1) goto LAB_00679a58;
    puVar2 = *(undefined4 **)(iVar4 + 0xc);
    puVar5 = (undefined4 *)(param_1 + 0x60);
    puVar6 = puVar2;
    puVar7 = puVar5;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    uVar3 = *(undefined4 *)(iVar1 + 300 + puVar2[5] * 4);
    FUN_00648600(param_1 + 0x88,0,0x2e);
    FUN_00648480(param_1 + 0x88,puVar2,uVar3);
    iVar4 = *(int *)(param_1 + 0xdc);
  }
  *(undefined4 **)(iVar4 + 0xc) = puVar5;
LAB_00679a58:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

