
void __fastcall FUN_0041afb0(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 uStack_8;
  undefined1 uStack_7;
  undefined1 uStack_6;
  undefined1 uStack_5;
  float local_4;
  
  iVar3 = param_1[0x235];
  bVar1 = false;
  iVar2 = FUN_00423c80();
  if ((iVar2 == 0) || (iVar2 = (**(code **)(*param_1 + 0x124))(), iVar2 != 0)) {
    iVar2 = FUN_00423c80();
    if ((iVar2 != 0) && (param_1[0x17bc] != 0)) {
      uStack_7 = 0x18;
      bVar1 = true;
      param_1[0x17bc] = 0;
      uStack_5 = 0xff;
      uStack_6 = 0x80;
      uStack_8 = 0x18;
    }
  }
  else {
    bVar1 = true;
    uStack_5 = 0xff;
    uStack_6 = 0x23;
    uStack_7 = 0x3c;
    uStack_8 = 0x80;
  }
  local_4 = 1.0;
  if ((DAT_006e92e4 < (float)param_1[0x10c]) &&
     (local_4 = (float)param_1[0x10c] + (float)param_1[0x10c],
     DAT_006e92e8 < local_4 != (NAN(DAT_006e92e8) || NAN(local_4)))) {
    local_4 = DAT_006e92e8;
  }
  FUN_0044e4a0();
  if (((bVar1) && (iVar3 != 0x15)) && (iVar3 = FUN_0065f190(s_BilboPostRender_00720044), iVar3 != 0)
     ) {
    iVar3 = FUN_00549470(param_1 + 0x10a);
    if (iVar3 != 0) {
      FUN_0041b580(iVar3,local_4,CONCAT31(CONCAT21(CONCAT11(uStack_5,uStack_6),uStack_7),uStack_8));
    }
    FUN_00549580(param_1 + 0x10a);
    FUN_0065f430();
    return;
  }
  return;
}

