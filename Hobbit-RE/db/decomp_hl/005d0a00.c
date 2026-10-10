
void __thiscall FUN_005d0a00(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_1c;
  undefined4 auStack_18 [2];
  undefined1 auStack_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006dffe0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005cc820(param_2);
  if (DAT_00798540 != 0) {
    ExceptionList = pvStack_c;
    return;
  }
  FUN_00649920(&uStack_1c,s_AIManager_Actions_Action__d_Targ_00746904,*(undefined4 *)(param_1 + 4));
  uStack_4 = 0;
  uVar2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 0xf;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(iVar3 + 0x100) = 0x1c;
    *(undefined4 *)(iVar3 + 0x104) = 1;
  }
  uStack_4 = 0xffffffff;
  FUN_00649950();
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  FUN_00649600(s_obj_mgr__LockObjectEvenIfDeactiv_0071d1b4);
  uStack_4 = 1;
  iVar3 = FUN_00406ce0(uVar2,uVar1);
  uStack_4 = 0xffffffff;
  if (iVar3 == -1) {
    FUN_00649720();
  }
  else {
    iVar3 = *(int *)(DAT_0076f648 + iVar3 * 0x14);
    FUN_00649720();
    if ((iVar3 != 0) && (*(char *)(iVar3 + 0x7c) == '\x1c')) {
      iVar3 = FUN_005b0110();
      FUN_00649920(auStack_18,s_AIManager_Actions_Action__d_AISt_00746a78,
                   *(undefined4 *)(param_1 + 4));
      uStack_4 = 2;
      uStack_1c = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar4 = FUN_00425010();
        *(undefined4 *)(iVar4 + 0x80) = 0xd;
        FUN_00647d10(iVar4,uStack_1c);
        *(undefined4 *)(iVar4 + 0x84) = 0;
        *(undefined4 *)(iVar4 + 0xf0) = 0;
        *(undefined4 *)(iVar4 + 0xf4) = *(undefined4 *)(iVar3 + 8);
        *(int *)(iVar4 + 0x100) = iVar3;
      }
      uStack_4 = 0xffffffff;
      FUN_00649950();
      goto LAB_005d0b6c;
    }
  }
  FUN_00649920(&uStack_1c,s_AIManager_Actions_Action__d_AISt_00746a78,*(undefined4 *)(param_1 + 4));
  uStack_4 = 3;
  auStack_18[0] = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 0xd;
    FUN_00647d10(iVar3,auStack_18[0]);
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(iVar3 + 0xf0) = 0;
    *(undefined4 *)(iVar3 + 0xf4) = *(undefined4 *)(param_1 + 0x80);
    *(int *)(iVar3 + 0x100) = param_1 + 0x78;
  }
  uStack_4 = 0xffffffff;
  FUN_00649950();
LAB_005d0b6c:
  FUN_00649920(&uStack_1c,s_AIManager_Actions_Action__d_Goal_00746a4c,*(undefined4 *)(param_1 + 4));
  uStack_4 = 4;
  auStack_18[0] = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 0xd;
    FUN_00647d10(iVar3,auStack_18[0]);
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(iVar3 + 0xf0) = 0;
    *(undefined4 *)(iVar3 + 0xf4) = *(undefined4 *)(param_1 + 0x80);
    *(int *)(iVar3 + 0x100) = param_1 + 0x78;
  }
  uStack_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(auStack_10,s_AIManager_Actions_Action__d_Over_00746a10,*(undefined4 *)(param_1 + 4));
  uStack_4 = 5;
  uVar2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 3;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x84) = 0;
  }
  uStack_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = pvStack_c;
  return;
}

