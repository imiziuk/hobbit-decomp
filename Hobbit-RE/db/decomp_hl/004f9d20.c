
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f9d20(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  float10 fVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  double *pdVar8;
  double *local_504;
  undefined1 local_4f8;
  undefined1 local_4f7;
  undefined1 local_4f6;
  undefined1 local_4f5;
  undefined1 local_4f4;
  undefined1 local_4f3;
  undefined1 local_4f2;
  undefined1 local_4f1;
  undefined1 local_4f0;
  undefined1 local_4ef;
  undefined1 local_4ee;
  undefined1 local_4ed;
  undefined1 local_4ec;
  undefined1 local_4eb;
  undefined1 local_4ea;
  undefined1 local_4e9;
  double local_4e8;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  int local_4d4;
  int local_4d0;
  undefined1 local_4cc;
  undefined1 local_4cb;
  undefined1 local_4ca;
  undefined1 local_4c9;
  undefined1 local_4c8;
  undefined1 local_4c7;
  undefined1 local_4c6;
  undefined1 local_4c5;
  undefined1 local_4c4;
  undefined1 local_4c3;
  undefined1 local_4c2;
  undefined1 local_4c1;
  undefined1 local_4c0;
  undefined1 local_4bf;
  undefined1 local_4be;
  undefined1 local_4bd;
  undefined1 local_4bc;
  undefined1 local_4bb;
  undefined1 local_4ba;
  undefined1 local_4b9;
  undefined1 local_4b8;
  undefined1 local_4b7;
  undefined1 local_4b6;
  undefined1 local_4b5;
  undefined1 local_4b4;
  undefined1 local_4b3;
  undefined1 local_4b2;
  undefined1 local_4b1;
  int local_4b0;
  int local_4ac;
  undefined1 local_4a8;
  undefined1 local_4a7;
  undefined1 local_4a6;
  undefined1 local_4a5;
  double local_48c [144];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d62c6;
  local_c = ExceptionList;
  local_504 = (double *)s_LoadScreen__Render_0072fd34;
  ExceptionList = &local_c;
  FUN_00649600();
  local_4 = 0;
  if (DAT_0075f8c8 == 0) goto LAB_004fa232;
  local_504 = (double *)0x4f9d6a;
  FUN_00671410();
  local_4e8 = _DAT_0075f8c0 + _DAT_006efa68;
  local_4 = CONCAT31(local_4._1_3_,1);
  local_504 = (double *)0x4f9d87;
  uVar5 = FUN_0064cb70();
  local_504 = (double *)((ulonglong)uVar5 >> 0x20);
  fVar4 = (float10)FUN_0064cbc0((int)uVar5);
  if (fVar4 < (float10)local_4e8 == (NAN(fVar4) || NAN((float10)local_4e8))) {
    local_504 = (double *)0x4f9da5;
    uVar5 = FUN_0064cb70();
    local_504 = (double *)((ulonglong)uVar5 >> 0x20);
    fVar4 = (float10)FUN_0064cbc0((int)uVar5);
    _DAT_0075f8c0 = (double)fVar4;
    local_504 = (double *)0x47435000;
    FUN_00671650(0x41200000);
    local_504 = (double *)0x0;
    FUN_00671930(0x42c80000);
    local_504 = &local_4e8;
    local_4e8 = -1.227815594772758e+24;
    local_4e0 = 0xc38e8000;
    FUN_00671670();
    local_504 = (double *)0x0;
    local_4e8 = 0.0;
    local_4e0 = 0;
    FUN_006723d0(&local_4e8);
    local_504 = local_48c;
    FUN_0065f910();
    FUN_0065f960(local_48c,0);
    FUN_0065fc10(0);
    local_4e8 = (double)CONCAT44(local_4e8._4_4_,&local_504);
    local_504 = (double *)0xff000000;
    FUN_0065f940();
    FUN_006628c0();
    iVar1 = FUN_0065f190(s_LoadScreen_0072fd28);
    if (iVar1 == 0) goto LAB_004fa221;
    local_504 = (double *)&local_4b0;
    FUN_0065f8a0(&local_4ac);
    local_504 = (double *)0x0;
    local_4d4 = local_4ac;
    local_4d0 = local_4b0;
    local_4dc = 0;
    local_4d8 = 0;
    local_4e9 = 0xff;
    local_4ea = 0;
    local_4eb = 0;
    local_4ec = 0;
    local_4ed = 0xff;
    local_4ee = 0;
    local_4ef = 0;
    local_4f0 = 0;
    local_4f5 = 0xff;
    local_4f6 = 0;
    local_4f7 = 0;
    local_4f8 = 0;
    local_4f1 = 0xff;
    local_4f2 = 0;
    local_4f3 = 0;
    local_4f4 = 0;
    FUN_0069fd50(&local_4dc,&local_4f4,&local_4f8,&local_4f0,&local_4ec);
    local_504 = (double *)0x17;
    FUN_0066c3a0(7);
    FUN_0066db80(&DAT_0075f878,0);
    local_504 = (double *)0xffffffff;
    local_4e8._0_4_ = &local_504;
    uVar2 = FUN_0041b9c0((float)local_4ac,
                         (float)local_4b0 * (float)_DAT_006efbc8 * (float)_DAT_006efbc0);
    uVar7 = 0;
    iVar1 = FUN_006a22a0(0xa4,0,uVar2);
    local_4e8 = (double)CONCAT44(local_4e8._4_4_,iVar1);
    uVar2 = FUN_00401f00(0,(float)iVar1,uVar7);
    FUN_0066e5a0(uVar2);
    local_504 = (double *)0x4f9f84;
    FUN_0066d9a0();
    local_504 = (double *)0x4f9f99;
    local_4d0 = __ftol();
    local_4d4 = local_4ac + -100;
    local_4dc = 0x32;
    local_4d8 = 0;
    local_504 = (double *)0x4f9fbe;
    uVar2 = FUN_0052a650();
    switch(uVar2) {
    case 0:
      local_4f1 = 0xff;
      local_4f2 = 0xff;
      local_4f3 = 0xff;
      local_4f4 = 0xff;
      puVar3 = &local_4f4;
      local_504 = DAT_0075f8cc;
      break;
    case 1:
      local_4f5 = 0xff;
      local_4f6 = 0xff;
      local_4f7 = 0xff;
      local_4f8 = 0xff;
      puVar3 = &local_4f8;
      local_504 = DAT_0075f8d0;
      break;
    case 2:
      local_4ed = 0xff;
      local_4ee = 0xff;
      local_4ef = 0xff;
      local_4f0 = 0xff;
      puVar3 = &local_4f0;
      local_504 = DAT_0075f8d4;
      break;
    case 3:
      local_4e9 = 0xff;
      local_4ea = 0xff;
      local_4eb = 0xff;
      local_4ec = 0xff;
      puVar3 = &local_4ec;
      local_504 = DAT_0075f8d8;
      break;
    case 4:
      local_4b5 = 0xff;
      local_4b6 = 0xff;
      local_4b7 = 0xff;
      local_4b8 = 0xff;
      puVar3 = &local_4b8;
      local_504 = DAT_0075f8dc;
      break;
    case 5:
      local_4c5 = 0xff;
      local_4c6 = 0xff;
      local_4c7 = 0xff;
      local_4c8 = 0xff;
      puVar3 = &local_4c8;
      local_504 = DAT_0075f8e0;
      break;
    case 6:
      local_4bd = 0xff;
      local_4be = 0xff;
      local_4bf = 0xff;
      local_4c0 = 0xff;
      puVar3 = &local_4c0;
      local_504 = DAT_0075f8e4;
      break;
    case 7:
      local_4b9 = 0xff;
      local_4ba = 0xff;
      local_4bb = 0xff;
      local_4bc = 0xff;
      puVar3 = &local_4bc;
      local_504 = DAT_0075f8e8;
      break;
    case 8:
      local_4b1 = 0xff;
      local_4b2 = 0xff;
      local_4b3 = 0xff;
      local_4b4 = 0xff;
      puVar3 = &local_4b4;
      local_504 = DAT_0075f8ec;
      break;
    case 9:
      local_4c9 = 0xff;
      local_4ca = 0xff;
      local_4cb = 0xff;
      local_4cc = 0xff;
      puVar3 = &local_4cc;
      local_504 = DAT_0075f8f0;
      break;
    case 10:
      local_4c1 = 0xff;
      local_4c2 = 0xff;
      local_4c3 = 0xff;
      local_4c4 = 0xff;
      puVar3 = &local_4c4;
      local_504 = DAT_0075f8f4;
      break;
    case 0xb:
      local_4a5 = 0xff;
      local_4a6 = 0xff;
      local_4a7 = 0xff;
      local_4a8 = 0xff;
      puVar3 = &local_4a8;
      local_504 = DAT_0075f8f8;
      break;
    default:
      local_504 = (double *)s_MISC_LEVEL_0072fd1c;
      pdVar8 = &local_4e8;
      uVar7 = 0x11;
      puVar6 = &local_4dc;
      local_4e8 = (double)CONCAT44(local_4e8._4_4_,0xff000000);
      local_4e8 = (double)CONCAT53(local_4e8._3_5_,0xff0000);
      local_4e8 = (double)CONCAT62(local_4e8._2_6_,0xff00);
      local_4e8 = (double)CONCAT71(local_4e8._1_7_,0xff);
      uVar2 = FUN_0069fa60(s_large_0071ceac);
      FUN_0069fac0(uVar2,puVar6,uVar7,pdVar8);
      goto LAB_004fa195;
    }
    uVar7 = 0x11;
    puVar6 = &local_4dc;
    uVar2 = FUN_0069fa60(s_large_0071ceac);
    FUN_0069fb40(uVar2,puVar6,uVar7,puVar3);
LAB_004fa195:
    local_4d4 = DAT_0075f870;
    DAT_0075f8b9 = DAT_0075f8b9 + 1;
    local_4dc = DAT_0075f868;
    local_4d8 = DAT_0075f86c;
    local_4d0 = DAT_0075f874;
    if (3 < DAT_0075f8b9) {
      DAT_0075f8b9 = 0;
    }
    pdVar8 = &local_4e8;
    local_4e8 = (double)CONCAT44(local_4e8._4_4_,0xff000000);
    local_4e8 = (double)CONCAT53(local_4e8._3_5_,0xff0000);
    local_4e8 = (double)CONCAT62(local_4e8._2_6_,0xff00);
    local_4e8 = (double)CONCAT71(local_4e8._1_7_,0xff);
    local_504 = (double *)(&DAT_0075f8fc)[DAT_0075f8b9];
    uVar7 = 0x11;
    puVar6 = &local_4dc;
    uVar2 = FUN_0069fa60(s_large_0071ceac);
    FUN_0069fb40(uVar2,puVar6,uVar7,pdVar8);
    local_504 = (double *)0x4fa21c;
    FUN_0065f430();
    local_504 = (double *)0x4fa221;
    FUN_0065f480();
  }
LAB_004fa221:
  local_4 = local_4 & 0xffffff00;
  local_504 = (double *)0x4fa232;
  FUN_00671570();
LAB_004fa232:
  local_4 = 0xffffffff;
  local_504 = (double *)0x4fa246;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

