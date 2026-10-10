
void __fastcall FUN_004eef30(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iStack_5c;
  int iStack_40;
  undefined1 auStack_20 [12];
  int iStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5f68;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  iVar8 = *param_1;
  local_4 = 0;
  FUN_0065fce0();
  FUN_00672260();
  bVar7 = (**(code **)(iVar8 + 0xcc))();
  if ((char)(((uint)bVar7 * (uint)*(byte *)(param_1 + 0x76)) / 0xff) != '\0') {
    iVar8 = FUN_00549470();
    if (iVar8 != 0) {
      iVar13 = 0;
      if (0 < (param_1[0x59] + 1) * param_1[0x5a]) {
        iVar11 = 0;
        do {
          puVar9 = (undefined4 *)FUN_005a3020(auStack_20);
          puVar10 = (undefined4 *)(param_1[0x71] + iVar11);
          *puVar10 = *puVar9;
          puVar10[1] = puVar9[1];
          puVar10[2] = puVar9[2];
          iVar13 = iVar13 + 1;
          iVar11 = iVar11 + 0xc;
        } while (iVar13 < (param_1[0x59] + 1) * param_1[0x5a]);
      }
      iVar11 = param_1[0x59] + -1;
      iVar14 = param_1[0x5a] + -1;
      iVar13 = param_1[0x60];
      fVar1 = (float)param_1[0x5c];
      fVar2 = (float)param_1[0x5b];
      if (((iVar13 == 0) || (iVar13 == 1)) || (iVar13 == 2)) {
        FUN_0066c3a0(5);
      }
      FUN_0066db80(iVar8);
      FUN_0066ddd0();
      FUN_0066dac0();
      iStack_5c = 0;
      if (0 < iVar14) {
        do {
          iVar8 = iStack_5c + 1;
          fVar3 = (float)iStack_5c * (fVar1 / (float)iVar14);
          iStack_40 = 0;
          fVar4 = (float)iVar8 * (fVar1 / (float)iVar14);
          if (0 < iVar11) {
            do {
              if (param_1[0x72] == 0) {
                iVar13 = param_1[0x59];
LAB_004ef145:
                iVar15 = iVar13 * iStack_5c + iStack_40;
                iStack_14 = iVar8 * iVar13 + iStack_40;
                iVar12 = iVar15 + 1;
                iVar13 = iStack_14 + 1;
              }
              else {
                iVar13 = param_1[0x59];
                if (iStack_40 != param_1[0x73]) goto LAB_004ef145;
                iVar15 = param_1[0x5a] * iVar13 + iStack_5c;
                iVar12 = iStack_40 + 1 + iVar13 * iStack_5c;
                iVar13 = iVar8 * iVar13 + 1 + iStack_40;
                iStack_14 = iVar15 + 1;
              }
              fVar5 = (float)iStack_40;
              iStack_40 = iStack_40 + 1;
              fVar5 = fVar5 * (fVar2 / (float)iVar11);
              fVar6 = (float)iStack_40 * (fVar2 / (float)iVar11);
              FUN_0066ddd0();
              FUN_0066dd10(fVar5,fVar3);
              FUN_0066de80(param_1[0x71] + iVar15 * 0xc);
              FUN_0066ddd0();
              FUN_0066dd10(fVar6,fVar3);
              FUN_0066de80(param_1[0x71] + iVar12 * 0xc);
              FUN_0066ddd0();
              FUN_0066dd10(fVar6,fVar4);
              FUN_0066de80(param_1[0x71] + iVar13 * 0xc);
              iVar13 = iStack_14;
              FUN_0066ddd0();
              FUN_0066dd10(fVar5,fVar4);
              FUN_0066de80(param_1[0x71] + iVar13 * 0xc);
            } while (iStack_40 < iVar11);
          }
          iStack_5c = iVar8;
        } while (iVar8 < iVar14);
      }
      FUN_0066d9a0();
      FUN_00549580();
    }
    FUN_00587d00();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_10;
  return;
}

