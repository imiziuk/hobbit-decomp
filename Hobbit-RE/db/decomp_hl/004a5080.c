
void __thiscall
FUN_004a5080(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  undefined4 uVar2;
  
  uVar2 = param_6;
  FUN_004357e0(param_4);
  FUN_005aa9e0(param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4,in_stack_ffffffe8,uVar2);
  iVar1 = *(int *)(param_1 + 0x300);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x1b0) == 0x37) {
      if ((*(int *)(iVar1 + 0xbc) != 0) && (*(char *)(*(int *)(iVar1 + 0xbc) + 0x44) == '\x01')) {
        FUN_005ba900(param_2,param_3,param_4,param_5,param_6,param_7);
        return;
      }
    }
    else if (((*(int *)(param_1 + 0x1b0) == 0x38) && (*(int *)(iVar1 + 0xbc) != 0)) &&
            (*(char *)(*(int *)(iVar1 + 0xbc) + 0x44) == '\x02')) {
      FUN_005ba900(param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  return;
}

