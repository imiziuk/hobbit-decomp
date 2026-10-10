
bool FUN_006cb3e1(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  if (DAT_0075acc0 != 0) {
    iVar2 = param_1[5];
    if ((iVar2 != DAT_0075ad50) || (iVar2 != DAT_0075ad60)) {
      if (DAT_00815f78 == 0) {
        FUN_006cb58d(1,1,iVar2,4,1,0,0,2,0,0,0);
        FUN_006cb58d(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_00816018 != 0) {
          uVar4 = 0;
          uVar3 = 0;
          uVar5 = DAT_0081601e;
        }
        else {
          uVar4 = DAT_0081601c;
          uVar3 = DAT_0081601e;
          uVar5 = 0;
        }
        FUN_006cb58d(1,DAT_00816018 == 0,iVar2,DAT_0081601a,uVar3,uVar4,uVar5,DAT_00816020,
                     DAT_00816022,DAT_00816024,DAT_00816026);
        if (DAT_00815fc4 != 0) {
          uVar4 = 0;
          uVar3 = 0;
          iVar2 = param_1[5];
          uVar5 = DAT_00815fca;
        }
        else {
          iVar2 = param_1[5];
          uVar4 = DAT_00815fc8;
          uVar3 = DAT_00815fca;
          uVar5 = 0;
        }
        FUN_006cb58d(0,DAT_00815fc4 == 0,iVar2,DAT_00815fc6,uVar3,uVar4,uVar5,DAT_00815fcc,
                     DAT_00815fce,DAT_00815fd0,DAT_00815fd2);
      }
    }
    iVar2 = param_1[7];
    if (DAT_0075ad54 < DAT_0075ad64) {
      if ((DAT_0075ad54 <= iVar2) && (iVar2 <= DAT_0075ad64)) {
        if ((DAT_0075ad54 < iVar2) && (iVar2 < DAT_0075ad64)) {
          return true;
        }
LAB_006cb559:
        iVar1 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar2 == DAT_0075ad54) {
          return DAT_0075ad58 <= iVar1;
        }
        return iVar1 < DAT_0075ad68;
      }
    }
    else {
      if (iVar2 < DAT_0075ad64) {
        return true;
      }
      if (DAT_0075ad54 < iVar2) {
        return true;
      }
      if ((iVar2 <= DAT_0075ad64) || (DAT_0075ad54 <= iVar2)) goto LAB_006cb559;
    }
  }
  return false;
}

