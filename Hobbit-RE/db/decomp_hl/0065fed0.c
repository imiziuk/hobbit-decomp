
void FUN_0065fed0(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int unaff_EBX;
  int *unaff_EBP;
  int unaff_retaddr;
  int *piVar4;
  int *local_d8;
  void *local_d4;
  int *local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  int iStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined1 auStack_a8 [4];
  int iStack_a4;
  undefined4 uStack_88;
  undefined1 auStack_54 [24];
  int iStack_3c;
  undefined1 auStack_34 [32];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e68ec;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0065f8a0(&local_d8,&local_cc);
  local_c8 = 0;
  local_d0 = (int *)0x0;
  local_d4 = (void *)0x0;
  local_c4 = 0;
  piVar4 = DAT_007f1000;
  iVar1 = (**(code **)(*DAT_007f1000 + 0x80))(DAT_007f1000,&local_c8);
  pvVar2 = local_d4;
  if ((iVar1 == 0) &&
     (iVar1 = FUN_0067e0ec(DAT_007f1000,unaff_EBX,local_d4,1,0,DAT_007f0450,1,&local_d8), iVar1 == 0
     )) {
    (**(code **)(*local_d8 + 0x38))(local_d8,0,auStack_34);
    iVar1 = FUN_0067e0ec(DAT_007f1000,unaff_retaddr,param_1,1,0,DAT_007f0450,1,&stack0xffffff1c);
    if (iVar1 == 0) {
      (**(code **)(*unaff_EBP + 0x38))(unaff_EBP,0,auStack_54);
      iVar1 = (**(code **)(*unaff_EBP + 0x3c))(unaff_EBP,0,&stack0xffffff18);
      if ((iVar1 == 0) &&
         (iVar1 = (**(code **)(*unaff_EBP + 0x3c))(unaff_EBP,0,&local_cc), iVar1 == 0)) {
        (**(code **)(*DAT_007f1000 + 0x8c))(DAT_007f1000);
        iVar1 = (**(code **)(*DAT_007f1000 + 0x70))(DAT_007f1000,local_d4,0,0,unaff_EBX,0);
        if (iVar1 == 0) {
          (**(code **)(*local_d0 + 8))(local_d0);
          (**(code **)(*local_d0 + 8))(local_d0);
          iStack_b0 = unaff_EBX + -1;
          iStack_c0 = unaff_retaddr + -1;
          iStack_bc = param_1 + -1;
          iStack_ac = (int)pvVar2 + -1;
          uStack_b8 = 0;
          uStack_b4 = 0;
          local_c8 = 0;
          local_c4 = 0;
          iVar1 = FUN_0067e152(local_cc,0,&local_c8,0,0,&uStack_b8,0xffffffff,0);
          if ((iVar1 == 0) &&
             (iVar1 = (**(code **)(*unaff_EBP + 0x40))(unaff_EBP,0,auStack_a8,0,0), iVar1 == 0)) {
            pvVar2 = operator_new(unaff_retaddr * param_1 * 4);
            local_d4 = pvVar2;
            if (0 < param_1) {
              iVar1 = iStack_a4;
              iVar3 = param_1;
              do {
                FUN_00648480(pvVar2,iVar1,unaff_retaddr * 4);
                pvVar2 = (void *)((int)pvVar2 + unaff_retaddr * 4);
                iVar3 = iVar3 + -1;
                iVar1 = iVar1 + iStack_3c * 4;
              } while (iVar3 != 0);
            }
            (**(code **)(*unaff_EBP + 0x44))(unaff_EBP,0);
            FUN_00650250();
            pvStack_14 = (void *)0x0;
            FUN_00650e90(3,puStack_8,param_1,0,0,0,0,0xffffffff,0);
            FUN_00649b20(pvStack_c);
            pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,1);
            if (unaff_retaddr == 0) {
              FUN_0064a750(s__xbmp_0074f0c8);
              FUN_00652740(uStack_88);
            }
            else {
              FUN_0064a750(&DAT_0074f0c0);
              FUN_00653240(uStack_88);
            }
            FUN_00650380();
            FUN_006bf840(0);
            (**(code **)(*unaff_EBP + 8))(unaff_EBP);
            (**(code **)(*unaff_EBP + 8))(unaff_EBP);
            (**(code **)(*piVar4 + 8))(piVar4);
            (**(code **)(*DAT_007f1000 + 0x88))(DAT_007f1000);
            pvStack_c = (void *)((uint)pvStack_c & 0xffffff00);
            FUN_00649ba0();
            pvStack_c = (void *)0xffffffff;
            thunk_FUN_00650380();
          }
        }
      }
    }
  }
  ExceptionList = pvStack_14;
  return;
}

