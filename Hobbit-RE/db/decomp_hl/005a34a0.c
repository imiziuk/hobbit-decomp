
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a34a0(float param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
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
  undefined4 uStack_26c;
  float fStack_268;
  undefined4 uStack_264;
  undefined1 local_258 [600];
  
  if (_DAT_006e95a8 < param_1) {
    if (param_1 < DAT_006e92e8 == (NAN(param_1) || NAN(DAT_006e92e8))) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.1;
  }
  if ((NAN(_DAT_007441dc) || NAN(param_1)) == (_DAT_007441dc == param_1)) {
    _DAT_007986b0 = DAT_006e92e8 / param_1;
    _DAT_007441dc = param_1;
    local_2a8 = 0x7f7fffff;
    local_2a4 = 0x7f7fffff;
    local_2a0 = 0x7f7fffff;
    FUN_00404870(0xff7fffff,0xff7fffff);
    FUN_0054c5c0(0x26,s_C__projects_meridian_Support_Geo_00744200);
    lVar5 = FUN_0054c790();
    while (lVar5 != 0) {
      piVar2 = (int *)FUN_004021c0(lVar5);
      iVar3 = (**(code **)(*piVar2 + 0xb8))(local_258,s_FInit_Quad_Size_007441ef + 1);
      uVar4 = 0;
      do {
        puVar1 = auStack_4b0 + uVar4;
        uVar4 = uVar4 + 1;
        *puVar1 = puVar1[(iVar3 + 8) - (int)auStack_4b0];
      } while (uVar4 < 0x200);
      FUN_004357e0(iVar3 + 0x208);
      FUN_004357e0(iVar3 + 0x214);
      uStack_295 = *(undefined1 *)(iVar3 + 0x223);
      uStack_296 = *(undefined1 *)(iVar3 + 0x222);
      uStack_297 = *(undefined1 *)(iVar3 + 0x221);
      uStack_298 = *(undefined1 *)(iVar3 + 0x220);
      uStack_294 = *(undefined4 *)(iVar3 + 0x224);
      uStack_290 = *(undefined4 *)(iVar3 + 0x228);
      uStack_28c = *(undefined4 *)(iVar3 + 0x22c);
      FUN_004357e0(iVar3 + 0x230);
      uStack_278 = *(undefined4 *)(iVar3 + 0x240);
      uStack_274 = *(undefined4 *)(iVar3 + 0x244);
      uStack_270 = *(undefined4 *)(iVar3 + 0x248);
      uStack_26c = *(undefined4 *)(iVar3 + 0x24c);
      fStack_268 = _DAT_007986b0 * *(float *)(iVar3 + 0x250);
      uStack_264 = *(undefined4 *)(iVar3 + 0x254);
      (**(code **)(*piVar2 + 0xb4))(s_Quad_Size__cm__0072eec4,&stack0xfffffb48);
      lVar5 = FUN_0054c790();
    }
    FUN_0054c880();
  }
  return;
}

