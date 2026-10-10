
void __thiscall FUN_0056b2c0(int param_1,float param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_camera_mgr__OnAdvanceLogic_0073f878);
  local_4 = 0;
  if (param_2 < DAT_006e92e4 == (param_2 == DAT_006e92e4)) {
    FUN_0056bdc0();
    iVar1 = *(int *)(param_1 + 0x480);
    switch(iVar1) {
    case 1:
      FUN_0056cab0(param_2);
      break;
    case 2:
      FUN_0056dae0(param_2);
      break;
    case 3:
      FUN_0056de40(param_2);
      break;
    case 4:
      FUN_0056efb0(param_2);
      break;
    case 5:
      FUN_0056d5e0(param_2);
      break;
    case 6:
      FUN_0056e2b0(param_2);
      break;
    case 7:
      FUN_0056e500(param_2);
      break;
    case 8:
      FUN_0056ee00(param_2);
      break;
    default:
      FUN_0056b6b0(1);
      goto LAB_0056b3d7;
    }
    FUN_0056f5b0(param_2);
    FUN_0056fd80(param_2);
    if (iVar1 == *(int *)(param_1 + 0x480)) {
      *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) & 0xfffffffd;
    }
    *(float *)(param_1 + 0x488) = param_2 + *(float *)(param_1 + 0x488);
    FUN_0056c5d0();
  }
LAB_0056b3d7:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

