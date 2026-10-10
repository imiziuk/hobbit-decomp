
void FUN_00591cd0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined **ppuVar4;
  int iVar5;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dcfb6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_0079855c != 0x20) {
    ExceptionList = &local_c;
    puVar1 = (undefined4 *)operator_new(0x584);
    iVar5 = 0;
    local_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = puVar1 + 1;
      *puVar1 = 0x20;
      FUN_006c043b(puVar2,0x2c,0x20,FUN_006499d0,FUN_00649ba0);
    }
    local_4 = 0xffffffff;
    if (0 < DAT_00798554) {
      iVar3 = 0;
      do {
        FUN_0064a320(iVar3 + (int)DAT_00798558);
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 0x2c;
      } while (iVar5 < DAT_00798554);
    }
    if (DAT_00798558 != (undefined4 *)0x0) {
      puVar1 = DAT_00798558 + -1;
      FUN_006c026a(DAT_00798558,0x2c,DAT_00798558[-1],FUN_00649ba0);
      FUN_006bf840(puVar1);
    }
    DAT_0079855c = 0x20;
    DAT_00798558 = puVar2;
  }
  if (DAT_00742794 == 0) {
    ExceptionList = local_c;
    return;
  }
  FUN_006501d0(s_PhysController__InitStatics_00742d5c);
  local_4 = 1;
  DAT_00742794 = 0;
  if (DAT_0079857c == 0) {
    if (DAT_00798574 != (undefined4 *)0x0) {
      puVar1 = DAT_00798574 + -1;
      FUN_006c026a(DAT_00798574,0x2c,DAT_00798574[-1],FUN_00649ba0);
      FUN_006bf840(puVar1);
    }
    DAT_00798574 = (undefined4 *)0x0;
    DAT_00798578 = 0;
  }
  else {
    DAT_00798570 = 0;
    if (DAT_00798578 == 0x42) goto LAB_00591ec5;
  }
  DAT_00798570 = 0;
  puVar1 = (undefined4 *)operator_new(0xb5c);
  local_4._0_1_ = 2;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = 0x42;
    FUN_006c043b(puVar2,0x2c,0x42,FUN_006499d0,FUN_00649ba0);
  }
  iVar5 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0 < DAT_00798570) {
    iVar3 = 0;
    do {
      FUN_0064a320(iVar3 + (int)DAT_00798574);
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0x2c;
    } while (iVar5 < DAT_00798570);
  }
  if (DAT_00798574 != (undefined4 *)0x0) {
    puVar1 = DAT_00798574 + -1;
    FUN_006c026a(DAT_00798574,0x2c,DAT_00798574[-1],FUN_00649ba0);
    FUN_006bf840(puVar1);
  }
  DAT_00798578 = 0x42;
  DAT_00798574 = puVar2;
LAB_00591ec5:
  ppuVar4 = &PTR_DAT_00742638;
  do {
    FUN_00649b20(*ppuVar4);
    local_4._0_1_ = 3;
    FUN_00469980(local_38);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00649ba0();
    ppuVar4 = ppuVar4 + 1;
  } while ((int)ppuVar4 < 0x742740);
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

