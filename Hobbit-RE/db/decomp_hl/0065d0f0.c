
char * FUN_0065d0f0(HWND param_1,undefined4 param_2,DWORD param_3)

{
  DWORD DVar1;
  undefined4 *puVar2;
  LPCSTR pCVar3;
  int iVar4;
  int iVar5;
  int unaff_EDI;
  undefined4 *puVar6;
  undefined4 auStack_2a8 [4];
  char *pcVar7;
  UINT UVar8;
  undefined1 auStack_26c [4];
  undefined1 local_268 [92];
  CHAR local_20c [512];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e671c;
  pvStack_c = ExceptionList;
  if (param_3 == 0) {
    ExceptionList = &pvStack_c;
    puVar2 = (undefined4 *)FUN_0065d4e0();
    puVar6 = auStack_2a8;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    local_4 = 6;
    FUN_00649920(local_268,s__s_The_application_will_now_exit_0074e580,param_2);
    UVar8 = 0;
    pcVar7 = s_Hobbit_Error_0074e5a8;
    local_4._0_1_ = 7;
    pCVar3 = (LPCSTR)FUN_00649940();
    MessageBoxA(param_1,pCVar3,pcVar7,UVar8);
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_00649950();
  }
  else {
    auStack_2a8[3] = 0x65d13a;
    ExceptionList = &pvStack_c;
    DVar1 = FormatMessageA(0x1000,(LPCVOID)0x0,param_3,0,local_20c,0x1ff,(va_list *)0x0);
    if (DVar1 == 0) {
      iVar4 = FUN_0065d360();
      if (iVar4 == 0) {
        puVar2 = (undefined4 *)FUN_0065d4e0();
        local_4 = 4;
        puVar6 = auStack_2a8;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar6 = puVar6 + 1;
        }
        FUN_00649920(auStack_26c,s__s_Error_code__08X_The_applicati_0074e538,param_2,param_3);
        UVar8 = 0;
        pcVar7 = s_Hobbit_Error_0074e570;
        local_4._0_1_ = 5;
        pCVar3 = (LPCSTR)FUN_00649940();
        MessageBoxA(param_1,pCVar3,pcVar7,UVar8);
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_00649950();
      }
      else {
        puVar2 = (undefined4 *)FUN_0065d4e0();
        puVar6 = auStack_2a8;
        for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar6 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar6 = puVar6 + 1;
        }
        local_4 = 2;
        FUN_00649920(auStack_26c,s__s__s_The_application_will_now_e_0074e4fc,param_2,iVar4);
        UVar8 = 0;
        pcVar7 = s_Hobbit_Error_0074e528;
        local_4._0_1_ = 3;
        pCVar3 = (LPCSTR)FUN_00649940();
        MessageBoxA(param_1,pCVar3,pcVar7,UVar8);
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_00649950();
      }
    }
    else {
      puVar2 = (undefined4 *)FUN_0065d4e0();
      puVar6 = auStack_2a8;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
      local_4 = 0;
      FUN_00649920(auStack_26c,s__s__s_The_application_will_now_e_0074e4c0,param_2,local_20c);
      UVar8 = 0;
      pcVar7 = s_Hobbit_Error_0074e4ec;
      local_4._0_1_ = 1;
      pCVar3 = (LPCSTR)FUN_00649940();
      MessageBoxA(param_1,pCVar3,pcVar7,UVar8);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649950();
    }
  }
  local_4 = 0xffffffff;
  FUN_00649ba0();
  FUN_00660a10();
  FUN_006c09f2();
  if (unaff_EDI < -0x7789f7dd) {
    if (unaff_EDI == -0x7789f7de) {
      return s_Unsupported_Texture_Filter_0074e6bc;
    }
    if (unaff_EDI < -0x7789f7e3) {
      if (unaff_EDI == -0x7789f7e4) {
        return s_Unsupported_Alpha_Argument_0074e638;
      }
      if (unaff_EDI < -0x7789f7e6) {
        if (unaff_EDI == -0x7789f7e7) {
          return s_Unsupported_Color_Operation_0074e5e4;
        }
        if (unaff_EDI == -0x7789fe84) {
          return s_Out_of_Video_Memory_0074e5d0;
        }
        if (unaff_EDI == -0x7789f7e8) {
          return s_Wrong_Texture_Format_0074e5b8;
        }
      }
      else {
        if (unaff_EDI == -0x7789f7e6) {
          return s_Unsupported_Color_Argument_0074e61c;
        }
        if (unaff_EDI == -0x7789f7e5) {
          return s_Unsupported_Alpha_Operation_0074e600;
        }
      }
    }
    else {
      switch(unaff_EDI) {
      case -0x7789f7e3:
        return s_Too_Many_Operations_0074e654;
      case -0x7789f7e2:
        return s_Conflicting_Texture_Filter_0074e668;
      case -0x7789f7e1:
        return s_Unsupported_Factor_Value_0074e684;
      case -0x7789f7df:
        return s_Conflicting_Render_State_0074e6a0;
      }
    }
  }
  else {
    switch(unaff_EDI) {
    case -0x7789f7da:
      return s_Conflicting_Texture_Palette_0074e6d8;
    case -0x7789f7d9:
      return s_Driver_Internal_Error_0074e6f4;
    case -0x7789f79a:
      return s_Not_Found_0074e70c;
    case -0x7789f799:
      return s_More_Data_0074e718;
    case -0x7789f798:
      return s_Device_Lost_0074e724;
    case -0x7789f797:
      return s_Device_Not_Reset_0074e730;
    case -0x7789f796:
      return s_Not_Available_0074e744;
    case -0x7789f795:
      return s_Invalid_Device_0074e754;
    case -0x7789f794:
      return s_Invalid_Call_0074e764;
    case -0x7789f793:
      return s_Driver_Invalid_Call_0074e774;
    }
  }
  return (char *)0x0;
}

