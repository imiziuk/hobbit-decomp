
undefined4 __fastcall FUN_0063e1c0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5b28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_text_in__ReadAllFields_0074aa74);
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x69c) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  iVar2 = FUN_00643f60(1);
  if (iVar2 != 2) {
LAB_0063e249:
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return 0;
  }
  if (*(char *)(param_1 + 0x680) == '{') {
    if (*(int *)(param_1 + 0x100) == 0) {
      iVar2 = FUN_00643f60(1);
      if (iVar2 == 2) {
        if (*(char *)(param_1 + 0x680) != '}') {
          uVar3 = FUN_0063dee0(param_1,s_Puntuation_missing__Expecting___f_0074aab8,
                               (int)*(char *)(param_1 + 0x680));
LAB_0063e477:
          local_4 = 0xffffffff;
          FUN_00649720();
          ExceptionList = local_c;
          return uVar3;
        }
LAB_0063e49f:
        local_4 = 0xffffffff;
        FUN_00649720();
        ExceptionList = local_c;
        return 1;
      }
      goto LAB_0063e249;
    }
    while( true ) {
      iVar2 = *(int *)(param_1 + 0x104);
      if (*(int *)(param_1 + 0x108) <= iVar2) {
        iVar2 = iVar2 / 2 + 1 + iVar2;
        if (iVar2 < 0x20) {
          iVar2 = 0x20;
        }
        *(int *)(param_1 + 0x108) = iVar2;
        uVar3 = thunk_FUN_0064ffa0(*(undefined4 *)(param_1 + 0x10c),iVar2 * 0x148,
                                   s_C__projects_meridian_xCore_Auxil_0074aae4,0xd8);
        *(undefined4 *)(param_1 + 0x10c) = uVar3;
      }
      iVar4 = *(int *)(param_1 + 0x104) * 0x148 + *(int *)(param_1 + 0x10c);
      iVar2 = FUN_00643f60(1);
      if (iVar2 != 3) {
        if ((iVar2 == 2) && (*(char *)(param_1 + 0x680) == '}')) goto LAB_0063e49f;
        pcVar5 = s_Expecting_to_read_a_string_for_t_0074ab20;
        goto LAB_0063e432;
      }
      pcVar5 = (char *)(param_1 + 0x274);
      FUN_00647d70(iVar4,pcVar5,0xff);
      iVar2 = FUN_00643f60(1);
      if (iVar2 != 2) {
        pcVar5 = s_Puntuation_missing__Expecting___f_0074ab70;
        goto LAB_0063e432;
      }
      if (*(char *)(param_1 + 0x680) != ':') {
        uVar3 = FUN_0063dee0(param_1,s_Puntuation_missing__Expecting___f_0074aba4,
                             (int)*(char *)(param_1 + 0x680));
        goto LAB_0063e43b;
      }
      iVar2 = FUN_00643f60(1);
      if (iVar2 != 3) break;
      *(undefined4 *)(iVar4 + 0x104) = 0;
      *(undefined4 *)(iVar4 + 0x100) = 0xffffffff;
      cVar1 = *pcVar5;
      while (cVar1 != '\0') {
        switch(cVar1) {
        case 'D':
        case 'd':
          *(undefined4 *)(iVar4 + 0x108 + *(int *)(iVar4 + 0x104) * 4) = 2;
          break;
        default:
          uVar3 = FUN_0063dee0(param_1,s_Unkown_type__c_from__s_field_0074ac0c,(int)*pcVar5,iVar4);
          goto LAB_0063e477;
        case 'F':
        case 'f':
          *(undefined4 *)(iVar4 + 0x108 + *(int *)(iVar4 + 0x104) * 4) = 1;
          break;
        case 'G':
        case 'g':
          *(undefined4 *)(iVar4 + 0x108 + *(int *)(iVar4 + 0x104) * 4) = 4;
          break;
        case 'S':
        case 's':
          *(undefined4 *)(iVar4 + 0x108 + *(int *)(iVar4 + 0x104) * 4) = 3;
        }
        pcVar5 = pcVar5 + 1;
        *(int *)(iVar4 + 0x104) = *(int *)(iVar4 + 0x104) + 1;
        cVar1 = *pcVar5;
      }
      *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
    }
    pcVar5 = s_Expecting_the_type_of_the_field_b_0074abd0;
LAB_0063e432:
    uVar3 = FUN_0063dee0(param_1,pcVar5);
  }
  else {
    uVar3 = FUN_0063dee0(param_1,s_Puntuation_missing__Expecting___f_0074aa8c,
                         (int)*(char *)(param_1 + 0x680));
  }
LAB_0063e43b:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return uVar3;
}

