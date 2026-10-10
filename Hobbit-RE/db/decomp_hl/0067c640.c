
undefined4 __thiscall FUN_0067c640(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 local_58 [12];
  undefined1 local_4c [16];
  undefined1 local_3c [48];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6f32;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_audio_package__Init_00752f08);
  iVar4 = param_2;
  uVar3 = 0;
  local_4 = 0;
  FUN_00647d70(param_1,param_2,0x80);
  *(undefined1 *)(param_1 + 0x7f) = 0;
  iVar1 = FUN_0064f210(iVar4,&DAT_00752f1c);
  if (iVar1 == 0) goto LAB_0067cbc9;
  FUN_0064f350(local_4c,0x40,1,iVar1);
  iVar2 = FUN_00647e80(local_4c,&DAT_00752f20,0x10);
  if ((iVar2 == 0) && (iVar2 = FUN_00647e80(local_3c,s_Windows_00752f28,0x10), iVar2 == 0)) {
    FUN_0064f350(param_1 + 0x8c,0xac,1,iVar1);
    if ((*(int *)(param_1 + 0xec) < 1) || (5000 < *(int *)(param_1 + 0xec))) {
      FUN_00649920(&param_2,s_Bad_descriptor_count_in_audio_pa_007531e4,iVar4);
      local_4 = CONCAT31(local_4._1_3_,1);
    }
    else {
      if (0 < *(int *)(param_1 + 0xf0)) {
        if (*(int *)(param_1 + 0xf4) < 1) {
          FUN_00649920(local_58,s_Bad_descriptor_footprint_in_audi_00752f5c,iVar4);
          local_4 = CONCAT31(local_4._1_3_,3);
          uVar3 = FUN_00649940();
          FUN_0064e7d0(uVar3);
          goto LAB_0067c76b;
        }
        uVar3 = thunk_FUN_0064ff70(*(undefined4 *)(param_1 + 0xf8),
                                   s_C__projects_meridian_xCore_entro_00752f8c,0xe7);
        *(undefined4 *)(param_1 + 0x198) = uVar3;
        if (*(int *)(param_1 + 0x104) == 0) {
          *(undefined4 *)(param_1 + 0x1a4) = 0;
        }
        else {
          uVar3 = thunk_FUN_0064ff70(*(int *)(param_1 + 0x104),
                                     s_C__projects_meridian_xCore_entro_00752fc8,0xec);
          *(undefined4 *)(param_1 + 0x1a4) = uVar3;
        }
        if (*(int *)(param_1 + 0xfc) == 0) {
          *(undefined4 *)(param_1 + 0x19c) = 0;
        }
        else {
          uVar3 = thunk_FUN_0064ff70(*(int *)(param_1 + 0xfc),
                                     s_C__projects_meridian_xCore_entro_00753004,0xf6);
          *(undefined4 *)(param_1 + 0x19c) = uVar3;
        }
        if (*(int *)(param_1 + 0x100) == 0) {
          *(undefined4 *)(param_1 + 0x1a0) = 0;
        }
        else {
          uVar3 = thunk_FUN_0064ff70(*(int *)(param_1 + 0x100),
                                     s_C__projects_meridian_xCore_entro_00753040,0x100);
          *(undefined4 *)(param_1 + 0x1a0) = uVar3;
        }
        uVar3 = thunk_FUN_0064ff70(*(int *)(param_1 + 0xf0) << 3,
                                   s_C__projects_meridian_xCore_entro_0075307c,0x108);
        *(undefined4 *)(param_1 + 0x194) = uVar3;
        uVar3 = thunk_FUN_0064ff70(*(int *)(param_1 + 0xec) << 2,
                                   s_C__projects_meridian_xCore_entro_007530b8,0x10b);
        *(undefined4 *)(param_1 + 0x1a8) = uVar3;
        uVar3 = thunk_FUN_0064ff70(*(undefined4 *)(param_1 + 0xf4),
                                   s_C__projects_meridian_xCore_entro_007530f4,0x10e);
        *(undefined4 *)(param_1 + 0x1ac) = uVar3;
        puVar5 = (undefined4 *)(param_1 + 0x1bc);
        iVar4 = 3;
        do {
          if (puVar5[-0x2a] == 0) {
            *puVar5 = 0;
          }
          else {
            uVar3 = thunk_FUN_0064ff70(puVar5[-0x2a] * 2 + 2,
                                       s_C__projects_meridian_xCore_entro_00753130,0x116);
            *puVar5 = uVar3;
          }
          puVar5 = puVar5 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        if (*(int *)(param_1 + 0x108) == 0) {
          *(undefined4 *)(param_1 + 0x1b0) = 0;
        }
        else {
          uVar3 = thunk_FUN_0064ff70(*(int *)(param_1 + 300) * *(int *)(param_1 + 0x108),
                                     s_C__projects_meridian_xCore_entro_0075316c,0x121);
          *(undefined4 *)(param_1 + 0x1b0) = uVar3;
        }
        if (*(int *)(param_1 + 0x110) == 0) {
          *(undefined4 *)(param_1 + 0x1b8) = 0;
        }
        else {
          uVar3 = thunk_FUN_0064ff70(*(int *)(param_1 + 0x134) * *(int *)(param_1 + 0x110),
                                     s_C__projects_meridian_xCore_entro_007531a8,0x12a);
          *(undefined4 *)(param_1 + 0x1b8) = uVar3;
        }
        *(undefined4 *)(param_1 + 0x1b4) = 0;
        FUN_0064f350(*(undefined4 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0xf8),1,iVar1);
        if (*(int *)(param_1 + 0x1a4) != 0) {
          FUN_0064f350(*(int *)(param_1 + 0x1a4),*(undefined4 *)(param_1 + 0x104),1,iVar1);
        }
        if (*(int *)(param_1 + 0x19c) != 0) {
          FUN_0064f350(*(int *)(param_1 + 0x19c),*(undefined4 *)(param_1 + 0xfc),1,iVar1);
        }
        if (*(int *)(param_1 + 0x1a0) != 0) {
          FUN_0064f350(*(int *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x100),1,iVar1);
        }
        FUN_0064f350(*(undefined4 *)(param_1 + 0x194),8,*(undefined4 *)(param_1 + 0xf0),iVar1);
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0xf0)) {
          do {
            *(int *)(*(int *)(param_1 + 0x194) + 4 + iVar4 * 8) = param_1;
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0xf0));
        }
        FUN_0064f350(*(undefined4 *)(param_1 + 0x1a8),4,*(undefined4 *)(param_1 + 0xec),iVar1);
        iVar4 = 0;
        if (0 < *(int *)(param_1 + 0xec)) {
          do {
            *(int *)(*(int *)(param_1 + 0x1a8) + iVar4 * 4) =
                 *(int *)(*(int *)(param_1 + 0x1a8) + iVar4 * 4) + *(int *)(param_1 + 0x1ac);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(param_1 + 0xec));
        }
        FUN_0064f350(*(undefined4 *)(param_1 + 0x1ac),*(undefined4 *)(param_1 + 0xf4),1,iVar1);
        piVar6 = (int *)(param_1 + 0x1bc);
        iVar4 = 3;
        do {
          if (*piVar6 != 0) {
            FUN_0064f350(*piVar6,piVar6[-0x2a] + 1,2,iVar1);
          }
          piVar6 = piVar6 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        if (*(int *)(param_1 + 0x1b0) != 0) {
          FUN_0064f350(*(int *)(param_1 + 0x1b0),*(undefined4 *)(param_1 + 300),
                       *(undefined4 *)(param_1 + 0x108),iVar1);
        }
        if (*(int *)(param_1 + 0x1b8) != 0) {
          FUN_0064f350(*(int *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x134),
                       *(undefined4 *)(param_1 + 0x110),iVar1);
        }
        DAT_00752ee4 = DAT_00752ee4 + *(int *)(param_1 + 0x90);
        *(undefined4 *)(param_1 + 0x1c8) = 0;
        if (*(int *)(param_1 + 0x90) != 0) {
          iVar4 = FUN_0067c0c0(*(int *)(param_1 + 0x90));
          piVar6 = *(int **)(param_1 + 0x1b0);
          *(int *)(param_1 + 0x1c8) = iVar4;
          param_2 = 0;
          if (0 < *(int *)(param_1 + 0x108)) {
            do {
              if (*(int *)(param_1 + 0x1c8) != 0) {
                *piVar6 = iVar4;
                iVar2 = FUN_0067c590(iVar1,piVar6,iVar4);
                iVar4 = iVar4 + iVar2;
              }
              param_2 = param_2 + 1;
              piVar6 = (int *)((int)piVar6 + *(int *)(param_1 + 300));
            } while (param_2 < *(int *)(param_1 + 0x108));
          }
        }
        FUN_0067cd90(0x3f800000);
        FUN_0067cdb0(0x3f800000);
        FUN_0067cdd0(0x3f800000);
        FUN_0067cdf0(0x3f800000);
        FUN_0067ce10(0x3f800000);
        FUN_0067ce30(0x3f800000);
        FUN_0067ce50(0x3f800000);
        uVar3 = 1;
        *(undefined4 *)(param_1 + 0xdc) = 0;
        *(undefined4 *)(param_1 + 0xe0) = 0;
        *(undefined4 *)(param_1 + 0xe4) = 0;
        *(undefined4 *)(param_1 + 0xe8) = 0;
        *(undefined4 *)(param_1 + 0x138) = 1;
        goto LAB_0067cbc0;
      }
      FUN_00649920(&param_2,s_Bad_identifier_count_in_audio_pa_00752f30,iVar4);
      local_4 = CONCAT31(local_4._1_3_,2);
    }
    uVar3 = FUN_00649940();
    FUN_0064e7d0(uVar3);
LAB_0067c76b:
    local_4 = local_4 & 0xffffff00;
    FUN_00649950();
    FUN_0064f2b0(iVar1);
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return 0;
  }
LAB_0067cbc0:
  FUN_0064f2b0(iVar1);
LAB_0067cbc9:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return uVar3;
}

