
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fc090(void)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  float local_20;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  FUN_006628c0();
  iVar1 = FUN_0065f190(s_LevelSelect_007307c0);
  if (iVar1 == 0) {
    return;
  }
  FUN_0065f910(DAT_0075f930 + 5);
  FUN_0065f960(DAT_0075f930 + 5,0);
  FUN_0065fc10(0);
  FUN_0065f940(0xff000000);
  local_c = 0x44;
  local_4 = 0x44;
  local_10 = 0x20;
  local_8 = 0x20;
  local_25 = 0xff;
  local_26 = 0xff;
  local_27 = 0xff;
  local_28 = 0xff;
  FUN_0069fac0(0,&local_10,0,&local_28,s_4C___Select_Level____007307aa + 2);
  fVar2 = (float)__ftol();
  iVar1 = (int)fVar2 + -7;
  local_20 = fVar2;
  if (iVar1 <= (int)fVar2 + 7) {
    iVar6 = iVar1 * 0xa4;
    iVar5 = ((iVar1 - (int)fVar2) + 0xc) * 0x12;
    do {
      if ((-1 < iVar6) && (iVar1 < *DAT_0075f930)) {
        local_c = iVar5 + 0x20;
        local_4 = iVar5 + 0x20;
        local_8 = 0x38;
        local_10 = 0x38;
        local_25 = 0xff;
        local_26 = 0xff;
        local_27 = 0xff;
        local_28 = 0xff;
        FUN_0069fac0(0,&local_10,0,&local_28,DAT_0075f930[1] + iVar6);
        fVar2 = local_20;
      }
      iVar1 = iVar1 + 1;
      iVar5 = iVar5 + 0x12;
      iVar6 = iVar6 + 0xa4;
    } while (iVar1 <= (int)fVar2 + 7);
  }
  local_4 = 0xf8;
  local_10 = 0x20;
  local_8 = 0x20;
  local_c = 0xf8;
  local_25 = 0xff;
  local_26 = 0xff;
  local_27 = 0xff;
  local_28 = 0xff;
  FUN_0069fac0(0,&local_10,0,&local_28,&DAT_00730614);
  iVar1 = (int)local_20 * 0xa4;
  if (*(int *)(DAT_0075f930[1] + 0xa0 + iVar1) != 0) {
    FUN_0066c3a0(7,0x13);
    FUN_0066db80(DAT_0075f930[1] + 0x80 + iVar1,0);
    uVar7 = 0xffffffff;
    local_20 = DAT_007307a0 * _DAT_006e936c;
    uVar3 = FUN_0041b9c0(DAT_007307a0,DAT_007307a0 * _DAT_006ebfd0);
    uVar4 = FUN_00401f00(_DAT_007307a4 - local_20,_DAT_007307a8 - local_20,0);
    FUN_0066e5a0(uVar4,uVar3,uVar7);
    FUN_0066d9a0();
  }
  local_c = 0x20;
  local_4 = 0x20;
  local_10 = 0x260;
  local_8 = 0x260;
  local_25 = 0xff;
  local_26 = 0xff;
  local_27 = 0xff;
  local_28 = 0xff;
  uVar3 = FUN_00502d60();
  FUN_0069fac0(0,&local_10,4,&local_28,uVar3);
  FUN_0065f430();
  FUN_0065f480();
  return;
}

