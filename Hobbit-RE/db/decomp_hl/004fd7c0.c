
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fd7c0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_128 [28];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d6616;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004fdb90();
  _DAT_007e3568 = &LAB_004fcd30;
  FUN_005a3dc0();
  iVar1 = FUN_004fb310();
  if (iVar1 != 0) {
    FUN_004fe1b0();
    ExceptionList = local_c;
    return;
  }
  iVar1 = FUN_0052ae30(s_VUGlogo_00730abc,1,0x1e0);
  if (iVar1 == 0) {
    FUN_0052b120(s_VIVENDI_UNIVERSAL_GAMES_MOVIE_HE_00730a98,1,5);
  }
  iVar1 = FUN_0052ae30(s_Sierra_00730a90,1,0x1e0);
  if (iVar1 == 0) {
    FUN_0052b120(s_SIERRA_MOVIE_HERE_00730a7c,1,5);
  }
  iVar1 = FUN_0052ae30(s_FizzBumper_00730a70,1,400);
  if (iVar1 == 0) {
    FUN_0052b120(s_FIZZ_MOVIE_HERE_00730a60,1,5);
  }
  iVar1 = FUN_0052ae30(s_Inevitable_00730a54,1,0x1e0);
  if (iVar1 == 0) {
    FUN_0052b120(s_INEVITABLE_MOVIE_HERE_00730a3c,1,5);
  }
  FUN_00647d10(&DAT_007631f8,DAT_00760134);
  FUN_006aafd0(&DAT_0071ceb4);
  uVar2 = FUN_0052ac90();
  FUN_00649920(local_128,s_strings__s_00723ad8,uVar2);
  local_4 = 0;
  uVar2 = FUN_00649940();
  uVar2 = FUN_005496c0(s_ui_strings_bin_00730a2c,uVar2);
  FUN_006aae30(&DAT_0071ceb4,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_0052ae30(s_intro_6_2_00730a20,1,0x140);
  FUN_00650010(s_Starting_Main_Loop_00730a0c);
  do {
    if (DAT_0076034c == 0) {
LAB_004fdb6e:
      FUN_004fe1b0();
      ExceptionList = local_c;
      return;
    }
    iVar1 = FUN_004fe3e0();
    if ((iVar1 == 0) || (DAT_0076034c == 0)) {
      DAT_0076034c = 0;
      goto LAB_004fdb6e;
    }
    iVar1 = FUN_0052ac30();
    if (iVar1 == 0) {
      FUN_0064cbe0();
      FUN_0064cc00();
      FUN_00650010(s_Calling_LoadLevel___007309c0);
      DAT_00760360 = 0;
      iVar1 = FUN_004fe5a0();
      FUN_00650010(s_LoadLevel___returned_007309d4);
LAB_004fda92:
      if (iVar1 != 0) goto LAB_004fda96;
      FUN_0052aca0();
      DAT_00760354 = 0;
    }
    else {
      iVar1 = FUN_0052ac70();
      if (iVar1 == 0) {
        uVar2 = FUN_0052ac50();
        FUN_0052a640(uVar2);
        FUN_0052a670(local_10c);
        FUN_004fce90(local_10c);
        FUN_0052cb70();
        FUN_00649920(local_128,s_Calling_LoadLevel___for___s__007309ec,local_10c);
        local_4 = 1;
        uVar2 = FUN_00649940();
        FUN_00650010(uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        DAT_00760360 = 0;
        iVar1 = FUN_004fe5a0();
        FUN_00650010(s_LoadLevel___returned_007309d4);
        goto LAB_004fda92;
      }
      FUN_00659ce0();
      iVar1 = 1;
LAB_004fda96:
      iVar3 = FUN_0052ac30();
      if (iVar3 != 0) {
        DAT_00798548 = 1;
        FUN_0052ac40(0);
        FUN_0052ac60(0xffffffff);
        FUN_0052ac80(0);
      }
      FUN_0054ca40();
      FUN_00650010(s_Calling_RunLevel___007309ac);
      FUN_004fee90();
      FUN_00650010(s_RunLevel___returned_00730998);
      if (DAT_00760104 == 0) {
        FUN_0052aca0();
      }
    }
    FUN_004fedc0();
    FUN_00659d20();
    if (((DAT_00760104 != 0) && (DAT_00798548 == 0)) && (iVar1 != 0)) {
      if (DAT_0076034c == 0) goto LAB_004fdb6e;
      DAT_00760360 = 0;
      FUN_0052a630(0x1d);
      DAT_0076010c = 0;
    }
  } while( true );
}

