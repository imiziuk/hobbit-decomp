
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00518ec0(int param_1,undefined4 param_2,undefined1 **param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined1 **ppuStack_4e8;
  undefined1 uStack_4d4;
  undefined1 uStack_4d3;
  undefined1 uStack_4d2;
  byte bStack_4d1;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  undefined1 *puStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined1 *puStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined1 *puStack_4ac;
  undefined1 *puStack_4a8;
  int iStack_4a4;
  int iStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined1 auStack_48c [1152];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d755b;
  pvStack_c = ExceptionList;
  if (*(int *)(param_1 + 0x15c) == 0) {
    ppuStack_4e8 = (undefined1 **)0x518efa;
    ExceptionList = &pvStack_c;
    FUN_00671410();
    ppuStack_4e8 = (undefined1 **)0x47435000;
    uStack_4 = 0;
    FUN_00671650(0x41200000);
    ppuStack_4e8 = (undefined1 **)0x0;
    FUN_00671930(0x42c80000);
    ppuStack_4e8 = &puStack_4c4;
    puStack_4c4 = (undefined1 *)0x44a98000;
    uStack_4c0 = 0xc4f04000;
    uStack_4bc = 0xc38e8000;
    FUN_00671670();
    ppuStack_4e8 = (undefined1 **)0x0;
    puStack_4c4 = (undefined1 *)0x0;
    uStack_4c0 = 0;
    uStack_4bc = 0;
    FUN_006723d0(&puStack_4c4);
    ppuStack_4e8 = (undefined1 **)&iStack_4a4;
    FUN_0065f8a0(&iStack_4a0);
    fStack_4cc = (float)iStack_4a0;
    fStack_4c8 = fStack_4cc * _DAT_006e936c;
    fStack_4d0 = (float)iStack_4a4 * _DAT_006e936c;
    FUN_0065f910(auStack_48c);
    FUN_0065f960(auStack_48c,0);
    FUN_0065fc10(0);
    puStack_4c4 = (undefined1 *)&ppuStack_4e8;
    ppuStack_4e8 = (undefined1 **)0xff000000;
    FUN_0065f940();
    if (*(int *)(param_1 + 0x158) == -1) {
      uStack_4b4 = 0;
      ppuStack_4e8 = (undefined1 **)0x518ff1;
      uStack_4b0 = __ftol();
      ppuStack_4e8 = (undefined1 **)0x518ffe;
      puStack_4ac = (undefined1 *)__ftol();
      ppuStack_4e8 = (undefined1 **)0x519011;
      puStack_4a8 = (undefined1 *)__ftol();
      ppuStack_4e8 = (undefined1 **)s_IDS_TO_BE_CONTINUED_007345b8;
      bStack_4d1 = 0xff;
      uStack_4d2 = 0xff;
      uStack_4d3 = 0xff;
      uStack_4d4 = 0xff;
      ppuStack_4e8 = (undefined1 **)FUN_006ab1a0(&DAT_0071ceb4);
      puVar7 = &uStack_4d4;
      uVar6 = 0x12;
      puVar3 = &uStack_4b4;
      uVar1 = FUN_0069fa60(s_large_0071ceac);
      FUN_0069fb40(uVar1,puVar3,uVar6,puVar7);
    }
    else {
      ppuStack_4e8 = (undefined1 **)0x7;
      FUN_0066c3a0(7);
      FUN_0066db80(*(int *)(param_1 + 0x158) * 0x20 + 0x184 + param_1,0);
      puStack_4c4 = (undefined1 *)&ppuStack_4e8;
      ppuStack_4e8 = (undefined1 **)0xffffffff;
      uVar1 = FUN_0041b9c0(0x44200000,0x43f00000);
      uVar6 = FUN_00401f00(fStack_4c8 - _DAT_006efe3c,fStack_4d0 - _DAT_006f31a4,0);
      FUN_0066e5a0(uVar6,uVar1);
      ppuStack_4e8 = (undefined1 **)0x5190ed;
      FUN_0066d9a0();
    }
    piVar5 = (int *)(param_1 + 0x160);
    iVar4 = 9;
    do {
      if (*piVar5 != 0) {
        ppuStack_4e8 = (undefined1 **)0x400;
        iVar2 = FUN_006a3270();
        if ((iVar2 != 0) && (*(int *)(DAT_0081303c + 0xe8) != 0)) {
          ppuStack_4e8 = (undefined1 **)0x519121;
          puVar3 = (undefined4 *)(**(code **)(*(int *)*piVar5 + 0x10))();
          uStack_49c = *puVar3;
          uStack_498 = puVar3[1];
          uStack_494 = puVar3[2];
          uStack_490 = puVar3[3];
          ppuStack_4e8 = (undefined1 **)0x0;
          FUN_006a0430(*(undefined4 *)(*piVar5 + 8),&uStack_49c);
        }
      }
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    ppuStack_4e8 = param_3;
    FUN_006a2880(param_2);
    if (*(int *)(param_1 + 0x204) == 0) {
      if (*(int *)(param_1 + 0x208) != 0) {
        ppuStack_4e8 = &puStack_4b8;
        FUN_0065f8a0(&puStack_4c4);
        puStack_4ac = puStack_4c4;
        bStack_4d1 = *(byte *)(param_1 + 0x20c);
        ppuStack_4e8 = (undefined1 **)0x0;
        puStack_4a8 = puStack_4b8;
        uStack_4b4 = 0;
        uStack_4b0 = 0;
        fStack_4d0 = (float)((uint)bStack_4d1 << 0x18);
        fStack_4cc = (float)((uint)bStack_4d1 << 0x18);
        fStack_4c8 = (float)((uint)bStack_4d1 << 0x18);
        uStack_4d2 = 0;
        uStack_4d3 = 0;
        uStack_4d4 = 0;
        FUN_0069fd50(&uStack_4b4,&uStack_4d4,&fStack_4c8,&fStack_4cc,&fStack_4d0);
        iVar4 = *(int *)(param_1 + 0x20c) + -0x10;
        *(int *)(param_1 + 0x20c) = iVar4;
        if (iVar4 < 1) {
          *(undefined4 *)(param_1 + 0x20c) = 0;
          *(undefined4 *)(param_1 + 0x208) = 0;
          ppuStack_4e8 = (undefined1 **)0x519329;
          FUN_006a0f00();
        }
      }
    }
    else {
      ppuStack_4e8 = (undefined1 **)0x519187;
      FUN_006a0f10();
      ppuStack_4e8 = &puStack_4c4;
      FUN_0065f8a0(&puStack_4b8);
      puStack_4ac = puStack_4b8;
      bStack_4d1 = *(byte *)(param_1 + 0x20c);
      ppuStack_4e8 = (undefined1 **)0x0;
      puStack_4a8 = puStack_4c4;
      uStack_4b4 = 0;
      uStack_4b0 = 0;
      uStack_4d2 = 0;
      uStack_4d3 = 0;
      uStack_4d4 = 0;
      fStack_4c8 = (float)((uint)bStack_4d1 << 0x18);
      fStack_4cc = (float)((uint)bStack_4d1 << 0x18);
      fStack_4d0 = (float)((uint)bStack_4d1 << 0x18);
      FUN_0069fd50(&uStack_4b4,&fStack_4d0,&fStack_4cc,&fStack_4c8,&uStack_4d4);
      iVar4 = *(int *)(param_1 + 0x20c) + 0x10;
      *(int *)(param_1 + 0x20c) = iVar4;
      if (0xfe < iVar4) {
        *(undefined4 *)(param_1 + 0x20c) = 0xff;
        *(undefined4 *)(param_1 + 0x204) = 0;
        *(undefined4 *)(param_1 + 0x208) = 1;
        ppuStack_4e8 = (undefined1 **)0x519257;
        FUN_005195d0();
      }
    }
    uStack_4 = 0xffffffff;
    ppuStack_4e8 = (undefined1 **)0x51933d;
    FUN_00671570();
  }
  ExceptionList = pvStack_c;
  return;
}

