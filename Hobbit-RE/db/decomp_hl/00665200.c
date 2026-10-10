
void FUN_00665200(int param_1)

{
  char cVar1;
  void *pvVar2;
  int unaff_EBX;
  undefined *local_28;
  int local_24;
  undefined1 local_1c [4];
  int local_18;
  void *local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6b34;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1 != 0) {
    local_1c[0] = (undefined1)param_1;
    ExceptionList = &pvStack_c;
    FUN_006678a0(0);
    pvVar2 = (void *)FUN_006c24c6(param_1);
    cVar1 = FUN_00668620(pvVar2,1);
    if (cVar1 != '\0') {
      FUN_00665950(local_18,param_1,pvVar2);
      *(undefined2 *)(local_18 + (int)pvVar2 * 2) = 0;
      local_14 = pvVar2;
    }
    local_4 = 0;
    FUN_00667630(local_1c,0,0xffffffff);
    local_4 = 0xffffffff;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_006bf840(local_18 + -2);
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
    local_18 = 0;
    local_14 = (void *)0x0;
    local_10 = 0;
  }
  FUN_006678a0(0);
  FUN_00667630(&DAT_007edb28,0,0xffffffff);
  local_4 = 1;
  if (-local_24 - 1U < 2) {
    FUN_006bf8fc();
  }
  cVar1 = FUN_00668620(local_24 + 1,0);
  if (cVar1 != '\0') {
    FUN_00665980(local_28 + local_24 * 2,0x2122,1);
    *(undefined2 *)(local_28 + (local_24 + 1) * 2) = 0;
  }
  if (local_28 == (undefined *)0x0) {
    local_28 = &DAT_006f962c;
  }
  (*(code *)PTR_FUN_0075b2fc)(DAT_007edadc,local_28);
  if (unaff_EBX != 0) {
    cVar1 = *(char *)(unaff_EBX + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(unaff_EBX + -1) = cVar1 + -1;
      ExceptionList = local_14;
      return;
    }
    FUN_006bf840(unaff_EBX + -2);
  }
  ExceptionList = local_14;
  return;
}

