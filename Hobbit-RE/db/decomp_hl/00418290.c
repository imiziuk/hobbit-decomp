
void __fastcall FUN_00418290(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (((param_1[1] == 0) && (*param_1 != 0)) && (param_1[2] == 3)) {
    iVar1 = FUN_0065f190(s_PuzzleTextRender_0071fdf0);
    if (iVar1 != 0) {
      local_14 = 0;
      local_13 = 0;
      local_12 = 0;
      local_11 = 0xff;
      if (param_1[4] == 0) {
        local_10 = DAT_0075b7f0 + 1;
        local_8 = DAT_0071fb34 + 1;
        local_c = DAT_0075b7f4 + -1;
        local_4 = DAT_0071fb38 + -1;
        uVar2 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_LAKETOWN_PUZ_CTRL_2_0071fdc0);
        puVar6 = &local_14;
        uVar5 = 0x12;
        piVar4 = &local_10;
        uVar3 = FUN_0069fa60(s_large_0071ceac);
        FUN_0069fb40(uVar3,piVar4,uVar5,puVar6,uVar2);
        local_10 = local_10 + -1;
        local_8 = local_8 + -1;
        local_c = local_c + -1;
        local_4 = local_4 + -1;
        local_11 = 0xff;
        local_12 = 0xff;
        local_13 = 0xff;
        local_14 = 0xff;
        uVar2 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_LAKETOWN_PUZ_CTRL_2_0071fdc0);
      }
      else {
        local_10 = DAT_0075b7f0 + 1;
        local_8 = DAT_0071fb34 + 1;
        local_c = DAT_0075b7f4 + -1;
        local_4 = DAT_0071fb38 + -1;
        uVar2 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_LAKETOWN_PUZ_CTRL_1_0071fdd8);
        puVar6 = &local_14;
        uVar5 = 0x12;
        piVar4 = &local_10;
        uVar3 = FUN_0069fa60(s_large_0071ceac);
        FUN_0069fb40(uVar3,piVar4,uVar5,puVar6,uVar2);
        local_10 = local_10 + -1;
        local_8 = local_8 + -1;
        local_c = local_c + -1;
        local_4 = local_4 + -1;
        local_11 = 0xff;
        local_12 = 0xff;
        local_13 = 0xff;
        local_14 = 0xff;
        uVar2 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_LAKETOWN_PUZ_CTRL_1_0071fdd8);
      }
      puVar6 = &local_14;
      piVar4 = &local_10;
      uVar5 = 0x12;
      uVar3 = FUN_0069fa60(s_large_0071ceac);
      FUN_0069fb40(uVar3,piVar4,uVar5,puVar6,uVar2);
      FUN_0065f430();
      return;
    }
  }
  return;
}

