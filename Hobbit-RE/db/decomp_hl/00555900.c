
undefined4 FUN_00555900(int *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  
  cVar1 = *(char *)*param_1;
  while ((cVar1 != '\0' && (iVar3 = FUN_006c1327((int)*(char *)*param_1), iVar3 != 0))) {
    iVar3 = *param_1;
    *param_1 = iVar3 + 1;
    cVar1 = *(char *)(iVar3 + 1);
  }
  puVar2 = (undefined1 *)*param_1;
  switch(*puVar2) {
  case 0:
    return 0x7ffffff9;
  default:
    *param_1 = (int)(puVar2 + 1);
    return 0x7fffffff;
  case 0x25:
    *param_1 = (int)(puVar2 + 1);
    return 0x18;
  case 0x2a:
    break;
  case 0x2b:
    *param_1 = (int)(puVar2 + 1);
    cVar1 = puVar2[1];
    if (cVar1 != '-') {
      if (cVar1 == '*') {
        *param_1 = (int)(puVar2 + 2);
        return 0xb;
      }
      return 7;
    }
    *param_1 = (int)(puVar2 + 2);
    if (puVar2[2] == '2') {
      *param_1 = (int)(puVar2 + 3);
      return 9;
    }
    return 8;
  case 0x2c:
    *param_1 = (int)(puVar2 + 1);
    return 0x7ffffffc;
  case 0x2d:
    *param_1 = (int)(puVar2 + 1);
    return 10;
  case 0x3a:
    *param_1 = (int)(puVar2 + 1);
    return 0x7ffffffa;
  case 0x3b:
    *param_1 = (int)(puVar2 + 1);
    return 0x7ffffffb;
  case 0x3c:
    *param_1 = (int)(puVar2 + 1);
    return 0x7ffffffe;
  case 0x3d:
    *param_1 = (int)(puVar2 + 1);
    return 0x7ffffff8;
  case 0x3e:
    *param_1 = (int)(puVar2 + 1);
    return 0x7ffffffd;
  }
  *param_1 = (int)(puVar2 + 1);
  cVar1 = puVar2[1];
  if (cVar1 == '2') {
    *param_1 = (int)(puVar2 + 2);
    return 5;
  }
  if (cVar1 == '4') {
    *param_1 = (int)(puVar2 + 2);
    return 6;
  }
  return 4;
}

