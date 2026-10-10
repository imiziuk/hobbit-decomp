
void FUN_0048c260(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_e4 [44];
  undefined1 auStack_b8 [128];
  undefined1 auStack_38 [44];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d2f6c;
  pvStack_c = ExceptionList;
  piVar3 = (int *)0x0;
  if (DAT_00798540 == 0) {
    ExceptionList = &pvStack_c;
    if (DAT_0072940c != 0) {
      DAT_0072940c = 0;
      ExceptionList = &pvStack_c;
      FUN_00649b20(s_Play_Surfaces_Only_00729520);
      iStack_4 = 0;
      piVar2 = DAT_0075cf08;
      iVar1 = DAT_0075cf0c;
      if (DAT_0075cf0c < DAT_0075cf04 + 1) {
        if (DAT_0075cf14 == 0) {
          iVar1 = DAT_0075cf0c / 2;
          iVar5 = 1;
          if (0 < iVar1) {
            iVar5 = iVar1;
          }
          if (iVar5 + DAT_0075cf04 < 1) {
            iVar1 = 1;
          }
          else {
            if (iVar1 < 1) {
              iVar1 = 1;
            }
            iVar1 = iVar1 + DAT_0075cf04;
          }
        }
        else {
          iVar1 = DAT_0075cf04 + DAT_0075cf14;
        }
        piVar2 = (int *)operator_new(iVar1 * 0x2c + 4);
        iStack_4._0_1_ = 1;
        if (piVar2 != (int *)0x0) {
          piVar3 = piVar2 + 1;
          *piVar2 = iVar1;
          FUN_006c043b(piVar3,0x2c,iVar1,FUN_006499d0,FUN_00649ba0);
        }
        iVar5 = 0;
        iStack_4 = (uint)iStack_4._1_3_ << 8;
        if (0 < DAT_0075cf04) {
          iVar4 = 0;
          do {
            FUN_0064a320(iVar4 + (int)DAT_0075cf08);
            iVar5 = iVar5 + 1;
            iVar4 = iVar4 + 0x2c;
          } while (iVar5 < DAT_0075cf04);
        }
        piVar2 = piVar3;
        if (DAT_0075cf08 != (int *)0x0) {
          FUN_00407f70(3);
        }
      }
      DAT_0075cf0c = iVar1;
      DAT_0075cf08 = piVar2;
      FUN_0064a320(auStack_e4);
      DAT_0075cf04 = DAT_0075cf04 + 1;
      iStack_4 = 0xffffffff;
      FUN_00649ba0();
      FUN_00649b20(s_All_Solid_Instances_0072950c);
      iStack_4 = 2;
      FUN_00469980(auStack_e4);
      iStack_4 = 0xffffffff;
      FUN_00649ba0();
      FUN_00649b20(s_Get_Data_Now_007294fc);
      iStack_4 = 3;
      FUN_00469980(auStack_38);
      iStack_4 = 0xffffffff;
      FUN_00649ba0();
    }
    FUN_00563550(param_1);
    FUN_0059ed70(param_1);
    FUN_005712d0(param_1);
    FUN_00459f30(param_1,s_Opening_Cinema_007294ec,0x11,1,0,0);
  }
  else {
    ExceptionList = &pvStack_c;
    if (DAT_0075d338 == 0) {
      ExceptionList = &pvStack_c;
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 5;
      FUN_00647d10(iVar1,&DAT_00729578);
      *(undefined4 *)(iVar1 + 0x84) = 0x15;
      *(undefined4 *)(iVar1 + 0x100) = 0;
    }
    iVar1 = FUN_00425010();
    FUN_00647d10(iVar1,s_View_Fog_Color_00729568);
    *(undefined4 *)(iVar1 + 0x80) = 0x11;
    *(undefined4 *)(iVar1 + 0x84) = 0x21;
    FUN_00647d10(auStack_b8,s_View_Fog_Color_00729568);
    FUN_00647dc0(auStack_b8,&DAT_00728244);
    FUN_00499e60(param_1,auStack_b8,0x10,0,0xff);
    FUN_00647d10(auStack_b8,s_View_Fog_Color_00729568);
    FUN_00647dc0(auStack_b8,&DAT_00728240);
    FUN_00499e60(param_1,auStack_b8,0x10,0,0xff);
    FUN_00647d10(auStack_b8,s_View_Fog_Color_00729568);
    FUN_00647dc0(auStack_b8,&DAT_0072823c);
    FUN_00499e60(param_1,auStack_b8,0x10,0,0xff);
    FUN_00647d10(auStack_b8,s_View_Fog_Color_00729568);
    FUN_00647dc0(auStack_b8,&DAT_00728238);
    FUN_00499e60(param_1,auStack_b8,0x10,0,0xff);
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 2;
    FUN_00647d10(iVar1,s_View_Fog_Start_00729558);
    *(undefined4 *)(iVar1 + 0x84) = 0x20;
    *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 2;
    FUN_00647d10(iVar1,s_View_Fog_End_00729548);
    *(undefined4 *)(iVar1 + 0x84) = 0x20;
    *(undefined4 *)(iVar1 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar1 + 0xfc) = 0x7f7fffff;
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 3;
    FUN_00647d10(iVar1,s_View_Fog_Enabled_00729534);
    *(undefined4 *)(iVar1 + 0x84) = 0x20;
    FUN_00563550(param_1);
    FUN_005712d0(param_1);
  }
  ExceptionList = pvStack_c;
  return;
}

