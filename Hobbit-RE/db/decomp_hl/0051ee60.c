
void __thiscall FUN_0051ee60(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  CRect aCStack_28 [8];
  undefined4 uStack_20;
  char *pcStack_1c;
  undefined4 uStack_18;
  undefined4 *puStack_14;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 1;
  param_1[0x272] = 1;
  piVar2 = param_1 + 5;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[4] = 0;
  param_1[0x273] = 0;
  param_1[0x274] = 0;
  param_1[0x275] = 0;
  param_1[0x276] = 0;
  param_1[0x277] = 0;
  param_1[0x278] = 0;
  param_1[0x279] = 0;
  param_1[0x27a] = 0;
  piVar3 = piVar2;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = -1;
    piVar3 = piVar3 + 1;
  }
  param_2 = 0;
  iVar4 = 0;
  puStack_14 = (undefined4 *)0x51eee1;
  iVar1 = FUN_00434e50();
  if (0 < iVar1) {
    do {
      uStack_18 = 0x51eef0;
      puStack_14 = (undefined4 *)iVar4;
      fVar5 = (float10)FUN_00434ca0();
      if ((NAN(fVar5) || NAN((float10)DAT_006e92e4)) == (fVar5 == (float10)DAT_006e92e4)) {
        uStack_18 = 0x51ef08;
        puStack_14 = (undefined4 *)iVar4;
        iVar1 = FUN_00434e40();
        if (iVar1 != 0) {
          param_2 = param_2 + 1;
          *piVar2 = iVar4;
          piVar2 = piVar2 + 1;
        }
      }
      iVar4 = iVar4 + 1;
      puStack_14 = (undefined4 *)0x51ef26;
      iVar1 = FUN_00434e50();
    } while (iVar4 < iVar1);
  }
  param_1[3] = param_2;
  DAT_00762690 = 4;
  if (param_2 < 5) {
    DAT_00762690 = param_2;
  }
  puStack_14 = param_1 + 0x152;
  uStack_18 = 0;
  pcStack_1c = s_Inst_CouragePoint_1_rgeom_007224a4;
  uStack_20 = 0x51ef5c;
  uStack_18 = FUN_005496c0();
  CRect::CRect(aCStack_28,0x430c0000,0x43a00000,0x435c0000,0x43c80000);
  FUN_004f92f0();
  param_1[0x51] = 0x40000000;
  return;
}

