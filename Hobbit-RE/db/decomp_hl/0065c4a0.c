
undefined4 FUN_0065c4a0(int *param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar3 = param_2;
  piVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e66a8;
  local_c = ExceptionList;
  if (DAT_007f0fa8 < 4) {
    ExceptionList = &local_c;
    cVar2 = FUN_0065c730(param_1,param_2,0x15);
    if (cVar2 == '\0') {
      cVar2 = FUN_0065c730(piVar1,uVar3,0x1a);
      if (cVar2 == '\0') {
        cVar2 = FUN_0065c730(piVar1,uVar3,0x19);
        if (cVar2 == '\0') {
          FUN_00649920(&param_2,s_Couldn_t_find_a_back_buffer_form_0074e320,uVar3);
          local_4 = 0;
LAB_0065c5a8:
          uVar3 = FUN_00649940();
          uVar3 = FUN_0065c800(uVar3);
          local_4 = 0xffffffff;
          FUN_00649950();
          ExceptionList = local_c;
          return uVar3;
        }
      }
    }
  }
  else {
    ExceptionList = &local_c;
    cVar2 = FUN_0065c730(param_1,param_2,0x15);
    if (cVar2 == '\0') {
      cVar2 = FUN_0065c730(piVar1,uVar3,0x16);
      if (cVar2 == '\0') {
        cVar2 = FUN_0065c730(piVar1,uVar3,0x14);
        if (cVar2 == '\0') {
          cVar2 = FUN_0065c730(piVar1,uVar3,0x17);
          if (cVar2 == '\0') {
            cVar2 = FUN_0065c730(piVar1,uVar3,0x19);
            if (cVar2 == '\0') {
              cVar2 = FUN_0065c730(piVar1,uVar3,0x1a);
              if (cVar2 == '\0') {
                FUN_00649920(&param_2,s_Couldn_t_find_a_back_buffer_form_0074e378,uVar3);
                local_4 = 1;
                goto LAB_0065c5a8;
              }
            }
          }
        }
      }
    }
  }
  bVar5 = ~(byte)(DAT_007edaec >> 3);
  param_2 = CONCAT31(param_2._1_3_,bVar5) & 0xffffff01;
  if ((bVar5 & 1) != 0) {
    cVar2 = FUN_0065c780(piVar1,uVar3,0x4b);
    if (cVar2 != '\0') goto LAB_0065c6b5;
    cVar2 = FUN_0065c780(piVar1,uVar3,0x4f);
    if (cVar2 != '\0') goto LAB_0065c6b5;
  }
  cVar2 = FUN_0065c780(piVar1,uVar3,0x47);
  if (cVar2 == '\0') {
    cVar2 = FUN_0065c780(piVar1,uVar3,0x4d);
    if (cVar2 == '\0') {
      cVar2 = FUN_0065c780(piVar1,uVar3,0x50);
      if (cVar2 == '\0') {
        cVar2 = FUN_0065c780(piVar1,uVar3,0x49);
        if (cVar2 == '\0') {
          FUN_00649920(&param_1,s_Couldn_t_find_a_depth_format_wit_0074e3d0,uVar3);
          local_4 = 2;
          uVar3 = FUN_00649940();
          uVar3 = FUN_0065c800(uVar3);
          local_4 = 0xffffffff;
          FUN_00649950();
          ExceptionList = local_c;
          return uVar3;
        }
      }
    }
  }
LAB_0065c6b5:
  piVar1[8] = 1;
  piVar1[5] = 1;
  if (piVar1[7] == 0) {
    piVar1[7] = 0;
    *piVar1 = param_3;
    piVar1[1] = param_4;
  }
  else {
    piVar1[7] = 1;
    piVar1[3] = 1;
    iVar4 = DAT_007eff88;
    if (param_3 <= DAT_007eff88) {
      iVar4 = param_3;
    }
    *piVar1 = iVar4;
    iVar4 = DAT_007eff8c;
    if (param_4 <= DAT_007eff8c) {
      iVar4 = param_4;
    }
    piVar1[1] = iVar4;
  }
  if ((DAT_007edaec & 4) != 0) {
    piVar1[10] = 1;
  }
  DAT_007f0444 = uVar3;
  ExceptionList = local_c;
  return 0;
}

