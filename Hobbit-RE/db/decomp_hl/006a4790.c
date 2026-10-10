
void __thiscall
FUN_006a4790(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e79c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_ui_listbox__RenderItem_00755d1c);
  iVar1 = param_6;
  uVar4 = *(undefined4 *)(param_1 + 0xa0);
  param_2 = param_2 + 5;
  param_4 = param_4 + -3;
  param_5 = param_5 + -2;
  param_3 = param_3 + -2;
  uVar5 = *(undefined4 *)(param_6 + 4);
  puVar3 = &param_2;
  local_4 = 0;
  uVar6 = param_8;
  uVar2 = FUN_0069fa60(*(undefined4 *)(param_1 + 0xac));
  FUN_0069fb40(uVar2,puVar3,uVar4,uVar6,uVar5);
  uVar4 = *(undefined4 *)(iVar1 + 4);
  param_2 = param_2 + -1;
  param_4 = param_4 + -1;
  param_3 = param_3 + -1;
  param_5 = param_5 + -1;
  uVar5 = *(undefined4 *)(param_1 + 0xa0);
  puVar3 = &param_2;
  uVar6 = param_7;
  uVar2 = FUN_0069fa60(*(undefined4 *)(param_1 + 0xac));
  FUN_0069fb40(uVar2,puVar3,uVar5,uVar6,uVar4);
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

