
void __fastcall FUN_004912a0(int param_1)

{
  int iVar1;
  
  iVar1 = 0x20;
  do {
    iVar1 = iVar1 + -1;
    if (*(int *)(param_1 + 0x1e4) != *(int *)(param_1 + 0x1e0)) {
      switch(*(int *)(param_1 + 0x1e0)) {
      case 0:
        FUN_00429100();
        break;
      case 1:
        FUN_00429100();
        break;
      case 2:
        FUN_00429100();
        break;
      case 3:
        FUN_00429100();
        break;
      case 4:
        FUN_00429100();
        break;
      case 5:
        FUN_00429100();
        break;
      case 6:
        FUN_00429100();
      }
      *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x1e0);
      *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1e4);
      switch(*(undefined4 *)(param_1 + 0x1e4)) {
      case 0:
        FUN_00429100();
        break;
      case 1:
        FUN_00429100();
        break;
      case 2:
        FUN_00491810();
        break;
      case 3:
        FUN_00491510();
        break;
      case 4:
        FUN_00429100();
        break;
      case 5:
        FUN_004917c0();
        break;
      case 6:
        FUN_00491840();
      }
      *(undefined4 *)(param_1 + 0x1ec) = 0;
    }
    *(float *)(param_1 + 0x1ec) = *(float *)(param_1 + 0x1f0) + *(float *)(param_1 + 0x1ec);
    switch(*(undefined4 *)(param_1 + 0x1e0)) {
    case 0:
      FUN_00429100();
      break;
    case 1:
      FUN_00491490();
      break;
    case 2:
      FUN_00491820();
      break;
    case 3:
      FUN_00491610();
      break;
    case 4:
      FUN_00491780();
      break;
    case 5:
      FUN_004917f0();
      break;
    case 6:
      FUN_00491930();
    }
  } while ((*(int *)(param_1 + 0x1e4) != *(int *)(param_1 + 0x1e0)) && (iVar1 != 0));
  return;
}

