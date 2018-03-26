# How to use Cassandra

## cqlsh

- start the server:
    ```bash
    ./$CASSANDRA_HOME/bin/cassandra
    ```
- start the CQL Shell:
    ```bash
    cqlsh
    ```

## Creating a Keyspace

A **keyspace** is a namespace that defines **data replication** on nodes. A cluster contains one keyspace per node.

```sql
CREATE KEYSPACE <identifier> WITH <properties>
```

Properties:
- replication:
    - strategy:
        - **Simple Strategy**: simple replication factor
        - **Network Topology Strategy**: set the replication factor for each data center independently
        - **Old Network Topology Strategy**: legacy replication strategy
- durable_writes
    - default: **true**


```sql
CREATE KEYSPACE “KeySpace Name”
WITH replication = {'class': ‘Strategy name’, 'replication_factor' : ‘No. of replicas’};

CREATE KEYSPACE “KeySpace Name”
WITH replication = {'class': ‘Strategy name’, 'replication_factor' : ‘No.Of  replicas’}
AND durable_writes = ‘Boolean value’;
```

### Strategy example

```sql
CREATE KEYSPACE tutorialspoint
WITH replication = {'class':'SimpleStrategy', 'replication_factor' : 3};
```

Check if the KEYSPACE was successfully created:
```sql
DESCRIBE keyspaces;
```

## Using a Keyspace

```sql
USE <identifier>
```

### Example

```sql
USE tutorialspoint;
```