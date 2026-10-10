
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006a99c0(int param_1,float *param_2,int **param_3,int *param_4,int **param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *local_84;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58 [17];
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e8008;
  local_c = ExceptionList;
  local_84 = param_4;
  ExceptionList = &local_c;
  FUN_0064b170();
  iVar3 = 0;
  iVar4 = 1;
  local_4 = 0;
  if (param_3 == (int **)0x1) {
    param_5 = (int **)0xff00ff00;
  }
  local_84 = local_58;
  FUN_006a8ed0(&param_3);
  if (param_3 != (int **)0x3) {
    if (param_3 == (int **)0x1) {
      switch(*(undefined2 *)(local_58[0] + 2)) {
      case 0x44:
        iVar4 = 7;
        break;
      default:
        goto switchD_006a9a69_caseD_45;
      case 0x4c:
        iVar4 = 8;
        break;
      case 0x50:
        iVar4 = 0x11;
        break;
      case 0x51:
        iVar4 = 0x10;
        break;
      case 0x52:
        iVar4 = 9;
        break;
      case 0x53:
        iVar4 = 10;
        break;
      case 0x58:
        iVar4 = 0xf;
        break;
      case 0x61:
        iVar4 = 0;
        break;
      case 0x62:
        break;
      case 99:
        iVar4 = 2;
        break;
      case 100:
        iVar4 = 3;
        break;
      case 0x6c:
        iVar4 = 4;
        break;
      case 0x70:
        iVar4 = 0x12;
        break;
      case 0x72:
        iVar4 = 5;
        break;
      case 0x73:
        iVar4 = 0xb;
        break;
      case 0x75:
        iVar4 = 6;
        break;
      case 0x78:
        iVar4 = 0xc;
        break;
      case 0x79:
        iVar4 = 0xd;
        break;
      case 0x7a:
        iVar4 = 0xe;
      }
      local_84 = (int *)0x17;
      FUN_0066c3a0(7);
      FUN_0066db80(iVar4 * 0x20 + DAT_0081303c + 0x110,0);
      param_5 = &local_84;
      local_84 = (int *)0xffffffff;
      uVar1 = FUN_0041b9c0(0x41900000,0x41900000);
      FUN_0066e5a0(param_2,uVar1);
      local_84 = (int *)0x6a9b4b;
      FUN_0066d9a0();
      *param_2 = *param_2 + _DAT_006e99e4;
    }
    else {
      local_84 = (int *)0x37;
      FUN_0066c3a0(7);
      FUN_0066db80(param_1 + 0x50,0);
      if (0 < local_14) {
        do {
          local_84 = (int *)(uint)*(ushort *)(local_58[0] + iVar3 * 2);
          piVar2 = (int *)FUN_006a9860();
          param_4 = (int *)piVar2[2];
          local_68 = ((float)*piVar2 + _DAT_006e95a8) / (float)*(int *)(param_1 + 0x70);
          param_3 = &local_84;
          local_70 = ((float)((int)param_4 + *piVar2) + _DAT_006e95a8) /
                     (float)*(int *)(param_1 + 0x70);
          local_64 = ((float)piVar2[1] + _DAT_006e95a8) / (float)*(int *)(param_1 + 0x74);
          local_6c = ((float)(*(int *)(param_1 + 0x84) + piVar2[1]) + _DAT_006e95a8) /
                     (float)*(int *)(param_1 + 0x74);
          local_60 = (float)(int)param_4;
          local_5c = (float)*(int *)(param_1 + 0x84);
          local_84 = (int *)param_5;
          FUN_0066e6b0(param_2,&local_60,&local_68,&local_70);
          iVar3 = iVar3 + 1;
          *param_2 = (float)piVar2[2] + *param_2;
        } while (iVar3 < local_14);
      }
      local_84 = (int *)0x6a9cc3;
      FUN_0066d9a0();
    }
  }
switchD_006a9a69_caseD_45:
  local_4 = 0xffffffff;
  local_84 = (int *)0x6a9cd4;
  FUN_0064b190();
  ExceptionList = local_c;
  return;
}

