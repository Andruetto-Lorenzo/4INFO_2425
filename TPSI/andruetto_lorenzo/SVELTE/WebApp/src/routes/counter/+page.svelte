<script>
  import Counter from "$lib/components/counter.svelte";
  import DoubleCounter from "$lib/components/double_counter.svelte";

  let counter = 0;
  let doubleCounter = 0;
  let sottolineato = true;
  $: sottolineato = doubleCounter % 2 == 0 ? true : false;
  $: doppio = counter * 2;
  let numeri = [1, 7, 2, 6, 9, 10];

  function gestisci_evento(evento) {
    alert(`${evento.detail.tipo} -- ${evento.detail.valore}`);
  }
</script>

<h1>Pagina Counter!!</h1>

<h2 class:sottolineato>Il valore del contatore vale: {counter}</h2>
<h2>Il suo doppio vale: {doppio}</h2>

<Counter bind:counter on:contatore={gestisci_evento} />

<ul>
  {#each numeri as numero, indice}
    <li>numeri[{indice}]:{numero}</li>
  {/each}
</ul>
<h2>Il valore del secondo contatore vale: {doubleCounter}</h2>

<DoubleCounter bind:doubleCounter />

<style>
  .rosso {
    color: red;
  }
  .verde {
    color: green;
  }
  .sottolineato {
    text-decoration: underline;
  }
</style>

