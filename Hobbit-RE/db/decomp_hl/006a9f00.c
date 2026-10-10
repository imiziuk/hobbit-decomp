
void __thiscall FUN_006a9f00(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int local_58 [17];
  undefined4 local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e8048;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_0064b170(param_4);
  local_4 = 0;
  FUN_006a8ed0(&param_3,local_58);
  if (param_3 == 1) {
    switch(*(undefined2 *)(local_58[0] + 2)) {
    case 0x44:
    case 0x53:
    case 0x61:
    case 0x62:
    case 99:
    case 100:
    case 0x6c:
    case 0x72:
    case 0x73:
    case 0x75:
    case 0x78:
    case 0x79:
      iVar1 = 0x12;
      param_2[2] = 0x12;
      break;
    default:
      goto switchD_006a9f6f_caseD_45;
    case 0x4c:
    case 0x52:
    case 0x7a:
      iVar1 = 0x22;
      param_2[2] = 0x22;
      break;
    case 0x50:
    case 0x51:
    case 0x58:
    case 0x70:
      iVar1 = 0x10;
      param_2[2] = 0x10;
    }
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x54) + 0x1c))
              (*(int **)(param_1 + 0x54),local_58[0],local_14,param_2,0x420,0);
    iVar1 = param_2[3];
    if ((int)param_2[3] <= *(int *)(param_1 + 0x58)) {
      iVar1 = *(int *)(param_1 + 0x58);
    }
  }
  param_2[3] = iVar1;
switchD_006a9f6f_caseD_45:
  local_4 = 0xffffffff;
  FUN_0064b190();
  ExceptionList = local_c;
  return;
}

