
void FUN_005734c0(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db848;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_event_mgr__HandleLightningEvent_0073fdbc);
  sVar1 = *(short *)(param_3 + 0x26);
  iVar4 = 0;
  local_4 = 0;
  if (0 < sVar1) {
    do {
      uVar2 = FUN_0053f1b0(s_LIGHTENING_END_0073fdac);
      iVar3 = FUN_00647ed0(uVar2);
      if (iVar3 == 0) {
LAB_0057354b:
        FUN_00551460(param_1,*(int *)(param_2 + 0xc) + iVar4 * 0xc,0x3f800000,0,0);
        break;
      }
      uVar2 = FUN_0053f1b0(s_LIGHTNING_END_0073fd9c);
      iVar3 = FUN_00647ed0(uVar2);
      if (iVar3 == 0) goto LAB_0057354b;
      iVar4 = iVar4 + 1;
    } while (iVar4 < sVar1);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

