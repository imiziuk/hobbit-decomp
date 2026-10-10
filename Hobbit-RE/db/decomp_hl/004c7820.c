
undefined4 __thiscall FUN_004c7820(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 local_c [12];
  
  iVar5 = FUN_004c71a0();
  if (iVar5 != 0) {
    piVar1 = *(int **)(param_1 + 0x140);
    fVar2 = (float)piVar1[4];
    uVar3 = piVar1[1];
    uVar4 = uVar3 * 2;
    if (((uVar4 ^ uVar3) & 0x7fffffff ^ uVar4) == 0xffffffff) {
      iVar5 = *piVar1;
    }
    else {
      iVar5 = FUN_00549470(piVar1 + 1);
    }
    iVar8 = (int)*(short *)(piVar1[2] * 0x50 + 0x26 + *(int *)(iVar5 + 0x58));
    iVar5 = 0;
    if (0 < iVar8) {
      do {
        iVar6 = FUN_0053f210(3);
        if (iVar6 == param_2) {
          iVar6 = FUN_0053f210(0);
          if ((float)iVar6 < fVar2 != ((float)iVar6 == fVar2)) {
            iVar6 = FUN_0053f210(1);
            if (fVar2 <= (float)iVar6) {
              puVar7 = (undefined4 *)FUN_0053c3a0(local_c,iVar5);
              *param_3 = *puVar7;
              param_3[1] = puVar7[1];
              param_3[2] = puVar7[2];
              return 1;
            }
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar8);
    }
  }
  return 0;
}

