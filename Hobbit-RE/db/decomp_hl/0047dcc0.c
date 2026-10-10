
void __fastcall FUN_0047dcc0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  piVar1 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (piVar1 == (int *)0x0) {
    FUN_0064e870(6,s_CINEMA_ERROR___StopAnim__Animate_007284ec);
  }
  else {
    (**(code **)(*piVar1 + 0x118))();
    uVar4 = FUN_00473320();
    iVar2 = FUN_004021c0(uVar4);
    if (iVar2 != 0) {
      iVar2 = FUN_00473330((undefined4 *)(param_1 + 0x20));
      if (iVar2 == 0) {
        (**(code **)(*piVar1 + 0x100))();
        (**(code **)(*piVar1 + 0xf8))(1);
        uVar3 = (**(code **)(*piVar1 + 0x4c))();
        FUN_0064e870(6,s__s_ending_conversation_mode__00728524,uVar3);
        return;
      }
    }
  }
  return;
}

