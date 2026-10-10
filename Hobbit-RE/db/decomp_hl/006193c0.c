
undefined4 __fastcall FUN_006193c0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  
  iVar7 = FUN_0041bcc0();
  fVar1 = *(float *)(iVar7 + 0x44);
  fVar2 = *(float *)(iVar7 + 0x48);
  fVar3 = *(float *)(iVar7 + 0x4c);
  fVar4 = *(float *)(iVar7 + 0x50);
  fVar5 = *(float *)(iVar7 + 0x54);
  fVar6 = *(float *)(iVar7 + 0x58);
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x578)) {
    do {
      iVar8 = *(int *)(*(int *)(param_1 + 0x57c) + iVar7 * 4);
      if (((iVar8 != 0) && ((*(byte *)(iVar8 + 0x18) & 1) == 0)) &&
         (iVar8 = FUN_004021c0(*(undefined4 *)(iVar8 + 0x10),*(undefined4 *)(iVar8 + 0x14)),
         iVar8 != 0)) {
        pfVar9 = (float *)FUN_005c0150();
        if ((((fVar1 <= pfVar9[3]) && (fVar4 < *pfVar9 == (NAN(fVar4) || NAN(*pfVar9)))) &&
            ((fVar3 <= pfVar9[5] &&
             ((fVar6 < pfVar9[2] == (NAN(fVar6) || NAN(pfVar9[2])) && (fVar2 <= pfVar9[4])))))) &&
           (fVar5 < pfVar9[1] == (NAN(fVar5) || NAN(pfVar9[1])))) {
          *(int *)(param_1 + 0x58c) = iVar7;
          return 1;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x578));
  }
  return 0;
}

