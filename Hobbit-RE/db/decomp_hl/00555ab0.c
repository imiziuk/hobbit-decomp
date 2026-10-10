
uint FUN_00555ab0(int *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9d08;
  cVar1 = *(char *)*param_1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  while ((cVar1 != '\0' && (iVar5 = FUN_006c1327((int)*(char *)*param_1), iVar5 != 0))) {
    iVar5 = *param_1;
    *param_1 = iVar5 + 1;
    cVar1 = *(char *)(iVar5 + 1);
  }
  bVar2 = false;
  bVar4 = false;
  bVar3 = false;
  cVar1 = *(char *)*param_1;
  while (cVar1 != '\0') {
    cVar1 = *(char *)*param_1;
    if (cVar1 == '~') {
      bVar2 = !bVar2;
    }
    else if (cVar1 == '@') {
      bVar4 = true;
    }
    else {
      if (cVar1 != '&') break;
      bVar3 = true;
    }
    pcVar6 = (char *)*param_1 + 1;
    *param_1 = (int)pcVar6;
    cVar1 = *pcVar6;
  }
  switch(*(undefined1 *)*param_1) {
  case 0:
    ExceptionList = local_c;
    return 0x7ffffffe;
  default:
    uVar8 = 0x7fffffff;
    FUN_00649920(local_10,s_Argument_parse_failure__s_0073d998,(undefined1 *)*param_1);
    local_4 = 0;
    uVar7 = FUN_00649940();
    FUN_0064e7d0(uVar7);
    local_4 = 0xffffffff;
    FUN_00649950();
    break;
  case 0x30:
    uVar8 = 0xf;
    break;
  case 0x31:
    bVar2 = !bVar2;
    uVar8 = 0xf;
    break;
  case 99:
    uVar8 = 1;
    break;
  case 100:
    uVar8 = 0;
    break;
  case 0x66:
    uVar8 = 0xe;
    break;
  case 0x6b:
    uVar8 = 3;
    break;
  case 0x73:
    uVar8 = 4;
    break;
  case 0x74:
    uVar8 = 5;
    break;
  case 0x78:
    uVar8 = 2;
  }
  *param_1 = *param_1 + 1;
  if (uVar8 != 0x7fffffff) {
    iVar5 = FUN_00555d00(param_1);
    if (param_2 == (int *)0x0) {
      if (iVar5 != 0) {
        ExceptionList = local_c;
        return 0x7fffffff;
      }
    }
    else {
      *param_2 = iVar5;
    }
    if (bVar2) {
      uVar8 = uVar8 | 0x10;
    }
    if (bVar4) {
      uVar8 = uVar8 | 0x20;
    }
    if (bVar3) {
      uVar8 = uVar8 | 0x40000000;
    }
  }
  ExceptionList = local_c;
  return uVar8;
}

