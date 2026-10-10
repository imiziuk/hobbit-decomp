
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a3980(float param_1)

{
  undefined1 *puVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  char *pcStack_720;
  undefined1 auStack_708 [552];
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  int iStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  int iStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined1 local_4b0 [584];
  undefined1 auStack_268 [616];
  
  fVar3 = DAT_006e92e4;
  if ((DAT_006e92e4 < param_1) &&
     (fVar3 = param_1, param_1 < DAT_006e92e8 == (NAN(param_1) || NAN(DAT_006e92e8)))) {
    fVar3 = DAT_006e92e8;
  }
  if ((NAN(_DAT_007441e0) || NAN(fVar3)) == (_DAT_007441e0 == fVar3)) {
    _DAT_007441e0 = fVar3;
    FUN_00404870();
    FUN_00404870();
    FUN_0054c5c0();
    lVar8 = FUN_0054c790();
    while (lVar8 != 0) {
      pcStack_720 = (char *)((ulonglong)lVar8 >> 0x20);
      piVar4 = (int *)FUN_004021c0((int)lVar8);
      pcStack_720 = s_Init_Width_0072f1c8;
      iVar5 = (**(code **)(*piVar4 + 0xb8))(local_4b0);
      uVar6 = 0;
      do {
        puVar1 = auStack_708 + uVar6;
        uVar6 = uVar6 + 1;
        *puVar1 = puVar1[(iVar5 + 8) - (int)auStack_708];
      } while (uVar6 < 0x200);
      FUN_004357e0(iVar5 + 0x208);
      FUN_004357e0(iVar5 + 0x214);
      FUN_00425250(iVar5 + 0x220);
      FUN_004357e0(iVar5 + 0x224);
      FUN_004357e0(iVar5 + 0x230);
      uStack_4d0 = *(undefined4 *)(iVar5 + 0x240);
      uStack_4cc = *(undefined4 *)(iVar5 + 0x244);
      uStack_4c8 = *(undefined4 *)(iVar5 + 0x248);
      iVar2 = *(int *)(iVar5 + 0x24c);
      uStack_4c0 = *(undefined4 *)(iVar5 + 0x250);
      uStack_4bc = *(undefined4 *)(iVar5 + 0x254);
      iStack_4c4 = iVar2;
      iStack_4c4 = __ftol();
      iStack_4c4 = iStack_4c4 * iVar2;
      (**(code **)(*piVar4 + 0xb4))(s___Cells_Wide_0072f1e4,&stack0xfffff8f0);
      puVar7 = (undefined4 *)(**(code **)(*piVar4 + 0xb8))(auStack_268,s_Init_Height_0072f1bc);
      pcStack_720 = (char *)*puVar7;
      uVar6 = 0;
      do {
        iVar5 = uVar6 - 0x10;
        uVar6 = uVar6 + 1;
        auStack_708[iVar5] = (auStack_708 + iVar5)[(int)puVar7 + (8 - (int)&stack0xfffff8e8)];
      } while (uVar6 < 0x200);
      FUN_004357e0(puVar7 + 0x82);
      FUN_004357e0(puVar7 + 0x85);
      FUN_00425250(puVar7 + 0x88);
      FUN_004357e0(puVar7 + 0x89);
      FUN_004357e0(puVar7 + 0x8c);
      uStack_4e0 = puVar7[0x90];
      uStack_4dc = puVar7[0x91];
      uStack_4d8 = puVar7[0x92];
      iVar5 = puVar7[0x93];
      uStack_4d0 = puVar7[0x94];
      uStack_4cc = puVar7[0x95];
      iStack_4d4 = iVar5;
      iStack_4d4 = __ftol();
      iStack_4d4 = iStack_4d4 * iVar5;
      (**(code **)(*piVar4 + 0xb4))(s___Cells_High_0072f1d4,&pcStack_720);
      pcStack_720 = (char *)0x5a3c6f;
      lVar8 = FUN_0054c790();
    }
    FUN_0054c880();
    return;
  }
  return;
}

