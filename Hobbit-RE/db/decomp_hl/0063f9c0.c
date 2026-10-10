
void __thiscall FUN_0063f9c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5c75;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_text_in__GetFieldTypeStr_0074b108);
  local_4 = 0;
  if (param_3 != 0) {
    param_2 = param_2 * 0x148;
    FUN_00648600(param_3,0,*(int *)(*(int *)(param_1 + 0x10c) + 0x104 + param_2) + 1);
    iVar2 = *(int *)(param_1 + 0x10c);
    iVar1 = 0;
    if (0 < *(int *)(iVar2 + 0x104 + param_2)) {
      iVar3 = param_2 + 0x108;
      do {
        switch(*(undefined4 *)(iVar3 + iVar2)) {
        case 0:
          *(undefined1 *)(iVar1 + param_3) = 0x2a;
          break;
        case 1:
          *(undefined1 *)(iVar1 + param_3) = 0x66;
          break;
        case 2:
          *(undefined1 *)(iVar1 + param_3) = 100;
          break;
        case 3:
          *(undefined1 *)(iVar1 + param_3) = 0x73;
          break;
        case 4:
          *(undefined1 *)(iVar1 + param_3) = 0x67;
        }
        iVar2 = *(int *)(param_1 + 0x10c);
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar1 < *(int *)(iVar2 + 0x104 + param_2));
    }
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

