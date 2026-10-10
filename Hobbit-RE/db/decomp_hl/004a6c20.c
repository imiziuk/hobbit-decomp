
void __thiscall
FUN_004a6c20(int *param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3c98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_NPCObject__HandleMove_0072b2bc);
  local_4 = 0;
  if ((param_1[0x6c] != 0x24) && (param_1[0x6c] != 0x25)) {
    iVar1 = FUN_00587ce0();
    if (iVar1 == 0x16) {
      (**(code **)(*param_1 + 0x160))(param_2,param_3);
    }
    else {
      if (-1 < (char)param_1[0x9a]) {
        iVar1 = FUN_004a4c80();
        if (iVar1 != 0) {
          FUN_00469060(param_2,param_3,param_4,param_5,param_6,param_7,1);
          goto LAB_004a6ce9;
        }
      }
      *param_2 = *param_2 + *param_3;
      param_2[1] = param_3[1] + param_2[1];
      param_2[2] = param_3[2] + param_2[2];
    }
  }
LAB_004a6ce9:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

