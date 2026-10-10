
void FUN_00530570(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 local_15c [44];
  undefined1 local_130 [76];
  undefined4 local_e4 [10];
  uint local_bc;
  int local_b8;
  undefined1 local_b4 [120];
  undefined4 local_3c [10];
  uint local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d86d7;
  local_c = ExceptionList;
  if ((param_1 != param_2) && (puVar2 = param_1 + 0x2a, puVar2 != param_2)) {
    puVar3 = param_1 + 0x48;
    ExceptionList = &local_c;
    do {
      FUN_00649b60(puVar2);
      local_4 = 0;
      FUN_0064b170(puVar3 + -0x13);
      puVar4 = puVar3;
      puVar6 = local_e4;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      local_4 = 1;
      if (((int)param_1[0x29] < local_b8) ||
         (((int)param_1[0x29] <= local_b8 && ((uint)param_1[0x28] < local_bc)))) {
        if (param_1 != puVar2) {
          puVar4 = puVar3 + 0x2a;
          do {
            FUN_0064a320(puVar4 + -0x72);
            FUN_0064b7f0(puVar4 + -0x67);
            puVar6 = puVar4 + -0x54;
            puVar5 = puVar4 + -0x2a;
            for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar5 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar5 = puVar5 + 1;
            }
            puVar6 = puVar4 + -0x72;
            puVar4 = puVar4 + -0x2a;
          } while (puVar6 != param_1);
        }
        FUN_0064a320(local_15c);
        FUN_0064b7f0(local_130);
        puVar4 = local_e4;
        puVar6 = param_1 + 0x1e;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      else {
        FUN_00530bb0(local_15c);
        local_4._0_1_ = 2;
        puVar4 = puVar2;
        while( true ) {
          puVar6 = puVar4 + -0x2a;
          if ((local_10 < (int)puVar4[-1]) ||
             ((local_10 <= (int)puVar4[-1] && (local_14 <= (uint)puVar4[-2])))) break;
          FUN_00530b80(puVar6);
          puVar5 = puVar4 + -0xc;
          puVar7 = puVar4 + 0x1e;
          for (iVar1 = 0xc; puVar4 = puVar6, iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        FUN_00530b80(local_b4);
        puVar6 = local_3c;
        puVar4 = puVar4 + 0x1e;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar4 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar4 = puVar4 + 1;
        }
        local_4._0_1_ = 3;
        FUN_0064b190();
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_00649ba0();
      }
      local_4 = 4;
      FUN_0064b190();
      local_4 = 0xffffffff;
      FUN_00649ba0();
      puVar2 = puVar2 + 0x2a;
      puVar3 = puVar3 + 0x2a;
    } while (puVar2 != param_2);
  }
  ExceptionList = local_c;
  return;
}

