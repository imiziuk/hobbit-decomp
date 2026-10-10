
int __thiscall FUN_00595b80(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd298;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_PhysController__GetAnimInfoFromS_00743038);
  iVar1 = 0;
  local_4 = 0;
  if (param_2 != 0) {
    switch(param_2) {
    case 1:
      if ((*(int *)(param_1 + 400) == 0) || (iVar1 = FUN_00566dd0(), iVar1 != 1)) {
        iVar1 = FUN_00593dd0(6,1,0xfffffffe);
      }
      else if ((*(int *)(*(int *)(param_1 + 400) + 0x54) == 0) ||
              (iVar1 = FUN_00594390(*(undefined4 *)(*(int *)(param_1 + 400) + 0x30)), iVar1 == 0)) {
        iVar1 = FUN_00593dd0(*(undefined4 *)(*(int *)(param_1 + 400) + 0x2c),1,0xfffffffe);
      }
      break;
    case 2:
    case 3:
    case 9:
      iVar1 = *(int *)(param_1 + 0x48);
      break;
    case 4:
      iVar1 = FUN_00597aa0();
      break;
    case 5:
      iVar1 = FUN_00593dd0(0x21,1,0xfffffffe);
      break;
    case 6:
      iVar1 = FUN_00593dd0(0xf,1,0xfffffffe);
      break;
    case 7:
    case 10:
      iVar1 = FUN_00593dd0(3,1,0xfffffffe);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x158);
      }
      break;
    case 8:
      iVar1 = FUN_00592190();
      *(undefined4 *)(iVar1 + 300) = 1;
      *(int *)(iVar1 + 0x138) = *(int *)(iVar1 + 0x138) + 1;
      *(undefined4 *)(iVar1 + 0x13c) = 1;
      *(int *)(iVar1 + 0x148) = *(int *)(iVar1 + 0x148) + 1;
      fVar2 = (float10)FUN_0064c6b0(0,(float)*(int *)(iVar1 + 0xd8) - DAT_006e92e8);
      *(float *)(iVar1 + 0xdc) = (float)fVar2;
      iVar1 = FUN_00594390(*(undefined4 *)(param_1 + 0x15c));
    }
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return iVar1;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 0;
}

