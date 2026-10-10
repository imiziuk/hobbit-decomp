
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a3720(float param_1)

{
  undefined1 *puVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_4b0 [520];
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined1 uStack_298;
  undefined1 uStack_297;
  undefined1 uStack_296;
  undefined1 uStack_295;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  int iStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined1 local_258 [600];
  
  fVar3 = DAT_006e92e4;
  if ((DAT_006e92e4 < param_1) &&
     (fVar3 = param_1, param_1 < DAT_006e92e8 == (NAN(param_1) || NAN(DAT_006e92e8)))) {
    fVar3 = DAT_006e92e8;
  }
  if ((NAN(_DAT_007441e4) || NAN(fVar3)) == (_DAT_007441e4 == fVar3)) {
    local_2a8 = 0x7f7fffff;
    local_2a4 = 0x7f7fffff;
    local_2a0 = 0x7f7fffff;
    _DAT_007441e4 = fVar3;
    FUN_00404870(0xff7fffff,0xff7fffff);
    FUN_0054c5c0(0x28,s_C__projects_meridian_Support_Geo_00744200);
    lVar7 = FUN_0054c790();
    while (lVar7 != 0) {
      piVar4 = (int *)FUN_004021c0(lVar7);
      iVar5 = (**(code **)(*piVar4 + 0xb8))(local_258,s_Particles_Init___Particles_00728f88);
      uVar6 = 0;
      do {
        puVar1 = auStack_4b0 + uVar6;
        uVar6 = uVar6 + 1;
        *puVar1 = puVar1[(iVar5 + 8) - (int)auStack_4b0];
      } while (uVar6 < 0x200);
      FUN_004357e0(iVar5 + 0x208);
      FUN_004357e0(iVar5 + 0x214);
      uStack_295 = *(undefined1 *)(iVar5 + 0x223);
      uStack_296 = *(undefined1 *)(iVar5 + 0x222);
      uStack_297 = *(undefined1 *)(iVar5 + 0x221);
      uStack_298 = *(undefined1 *)(iVar5 + 0x220);
      uStack_294 = *(undefined4 *)(iVar5 + 0x224);
      uStack_290 = *(undefined4 *)(iVar5 + 0x228);
      uStack_28c = *(undefined4 *)(iVar5 + 0x22c);
      FUN_004357e0(iVar5 + 0x230);
      uStack_278 = *(undefined4 *)(iVar5 + 0x240);
      uStack_274 = *(undefined4 *)(iVar5 + 0x244);
      uStack_270 = *(undefined4 *)(iVar5 + 0x248);
      iVar2 = *(int *)(iVar5 + 0x24c);
      uStack_268 = *(undefined4 *)(iVar5 + 0x250);
      uStack_264 = *(undefined4 *)(iVar5 + 0x254);
      iStack_26c = iVar2;
      iStack_26c = __ftol();
      iStack_26c = iStack_26c * iVar2;
      (**(code **)(*piVar4 + 0xb4))(s_Particles___Particles_00728fa4,&stack0xfffffb48);
      lVar7 = FUN_0054c790();
    }
    FUN_0054c880();
    return;
  }
  return;
}

