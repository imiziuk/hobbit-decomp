
void FUN_00674c70(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)((int)param_1 + 0x1d)) {
  case 3:
    piVar2 = (int *)0x15;
    piVar1 = (int *)0x33545844;
    break;
  case 4:
    piVar2 = (int *)0x16;
    piVar1 = (int *)0x31545844;
    break;
  case 5:
    piVar2 = (int *)0x14;
    piVar1 = (int *)0x31545844;
    break;
  default:
    piVar1 = param_1;
    piVar2 = param_1;
    break;
  case 7:
    piVar2 = (int *)0x1a;
    piVar1 = (int *)0x33545844;
    break;
  case 10:
    piVar2 = (int *)0x19;
    piVar1 = (int *)0x31545844;
    break;
  case 0xb:
    piVar2 = (int *)0x18;
    piVar1 = (int *)0x31545844;
    break;
  case 0xc:
    piVar2 = (int *)0x17;
    piVar1 = (int *)0x31545844;
    break;
  case 0x49:
    piVar2 = (int *)0x31545844;
    piVar1 = (int *)0x31545844;
    break;
  case 0x4b:
    piVar2 = (int *)0x1c;
    piVar1 = (int *)0x1c;
    break;
  case 0x4e:
    piVar2 = (int *)0x33545844;
    piVar1 = (int *)0x33545844;
  }
  if ((char)param_1[7] == '\0') {
    iVar3 = *param_1;
  }
  else {
    iVar3 = *(int *)*param_1 + *param_1;
  }
  if (iVar3 == 0) {
    piVar1 = piVar2;
  }
  FUN_00674a00(param_1,piVar2,piVar1);
  return;
}

