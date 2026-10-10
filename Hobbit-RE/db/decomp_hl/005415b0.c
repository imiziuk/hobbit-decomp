
void __thiscall FUN_005415b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9363;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_char_anim_player__GetInterpKeys_00737cf0);
  local_4 = 0;
  (**(code **)(*(int *)(param_1 + 0xcc) + 0x18))(param_2);
  FUN_00541280(param_2);
  piVar3 = (int *)(param_1 + 0x110);
  iVar2 = 7;
  do {
    if ((int *)*piVar3 != (int *)0x0) {
      (**(code **)(*(int *)*piVar3 + 0x20))(param_2);
      iVar1 = (**(code **)(*(int *)*piVar3 + 0x2c))();
      if (iVar1 != 0) {
        FUN_00541280(param_2);
      }
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_10;
  return;
}

