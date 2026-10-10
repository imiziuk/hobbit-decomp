
void __thiscall FUN_0054cc00(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9800;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0064f4f0(param_2,s_MemoryStats_0073cff4);
  FUN_0064f4f0(param_2,s__________________________________0073cfa8);
  FUN_0064f4f0(param_2,s__15s__15s__15s__15s__15s_0073cf50,s_Type_Name_0073cf6c,s_Count_0073cf84,
               s_Class_Size_0073d004,s_Class_Memory_0073cf8c,s_Load_Memory_0073cf9c);
  local_1c = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_38 = 0;
  local_3c = 0;
  local_34 = 0;
  local_2c = 0;
  local_30 = 0;
  local_44 = 0;
  local_40 = 0;
  local_4 = 1;
  FUN_0054d730(&local_28,&local_44);
  iVar4 = 0;
  local_4c = 0;
  local_48 = 0;
  if (0 < local_3c) {
    local_50 = (int *)(param_1 + 0x2004);
    do {
      iVar6 = 0;
      iVar1 = (&DAT_0076f908)[iVar4];
      iVar7 = 0;
      iVar2 = 0;
      iVar3 = 0;
      pcVar5 = s_UNKNOWN_0073ce10;
      if (iVar1 != 0) {
        iVar7 = *local_50;
        iVar6 = *(int *)(iVar1 + 0x10);
        pcVar5 = *(char **)(iVar1 + 4);
        iVar3 = *(int *)(iVar1 + 0x14);
        iVar2 = iVar7 * iVar6;
      }
      local_4c = local_4c + iVar2;
      local_48 = local_48 + iVar3;
      FUN_0064f4f0(param_2,s__15s__15i__15i__15i__15i_0073cf34,pcVar5,iVar7,iVar6,iVar2,iVar3);
      iVar4 = iVar4 + 1;
      local_50 = local_50 + 8;
    } while (iVar4 < local_3c);
  }
  FUN_0064f4f0(param_2,s_Total_Object_Class_Memory___15i_0073cf10,local_4c);
  FUN_0064f4f0(param_2,s_Total_Object_Load_Memory___15i_0073ceec,local_48);
  FUN_0064f4f0(param_2,s__________________________________0073cea0);
  if (local_30 != 2) {
    FUN_006bf840(local_38);
  }
  local_4 = 0xffffffff;
  if ((local_14 != 2) && (local_1c != 0)) {
    iVar4 = local_1c + -4;
    FUN_006c026a(local_1c,0x4c,*(undefined4 *)(local_1c + -4),FUN_0064b190);
    FUN_006bf840(iVar4);
  }
  ExceptionList = local_c;
  return;
}

