
void FUN_006c3145(void)

{
  HMODULE pHVar1;
  code *pcVar2;
  
  pHVar1 = GetModuleHandleA("KERNEL32");
  if (pHVar1 != (HMODULE)0x0) {
    pcVar2 = (code *)(*(code *)PTR_FUN_0075b2d8)(pHVar1,"IsProcessorFeaturePresent");
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(0);
      return;
    }
  }
  FUN_006c3107();
  return;
}

